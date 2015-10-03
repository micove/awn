#!/usr/bin/python
#
#  Copyright (C) 2007 Neil Jagdish Patel <njpatel@gmail.com>
#
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA.
#
#  Author: Ryan Rushton <ryan@rrdesign.ca>
#
#  Notes: Avant Window Navigator Manager

import sys, os, os.path, time

PLAT_PKG = '/usr/local/lib/python2.5/site-packages'
SITE_PKG = '/usr/local/lib/python2.5/site-packages'
AWN_MANAGER_DIR = os.path.join('/usr/local/share/avant-window-navigator', 'awn-manager')
sys.path = [AWN_MANAGER_DIR] + sys.path
if PLAT_PKG not in sys.path:
    sys.path = [PLAT_PKG] + sys.path
if SITE_PKG not in sys.path:
    sys.path = [SITE_PKG] + sys.path

try:
    import pygtk
    pygtk.require("2.0")
except:
    pass
try:
    import gobject
    import gtk
    import gtk.glade
    import gtk.gdk as gdk
except Exception, e:
    sys.stderr.write(str(e) + '\n')
    sys.exit(1)

from awnTheme import AwnThemeManager
from awnPreferences import awnPreferences
from awnApplet import awnApplet
from awnLauncher import awnLauncher
import awnDefs as defs
import awn

awn.vfs_init()
defs.i18nize(globals())

if os.geteuid() == 0:
    sys.stderr.write(_("Awn Manager can't be run as root.") + '\n')
    sys.exit(1)

class AwnManager:

    def __init__(self):

        if not os.path.exists(defs.HOME_CONFIG_DIR):
            os.makedirs(defs.HOME_CONFIG_DIR)
        self.GLADE_PATH = os.path.join(AWN_MANAGER_DIR, 'window.glade')
        gtk.glade.bindtextdomain(defs.I18N_DOMAIN, defs.LOCALEDIR)
        gtk.glade.textdomain(defs.I18N_DOMAIN)

        self.wTree = gtk.glade.XML(self.GLADE_PATH, domain=defs.I18N_DOMAIN)

        self.window = self.wTree.get_widget("awnManagerWindow")
        self.window.set_title(_("Awn Manager"))
        self.theme = gtk.icon_theme_get_default()
        icon_search_path = os.path.join('/usr/local/share', 'icons')
        if icon_search_path not in self.theme.get_search_path():
            self.theme.append_search_path(icon_search_path)
        icon_list = []
        icon_sizes = self.theme.get_icon_sizes('awn-manager')
        for size in icon_sizes:
            if size == -1: # scalable
                if 128 not in icon_sizes:
                    icon = self.safe_load_icon('awn-manager', 128, gtk.ICON_LOOKUP_USE_BUILTIN)
                else:
                    continue
            else:
                icon = self.safe_load_icon('awn-manager', size, gtk.ICON_LOOKUP_USE_BUILTIN)
            icon_list.append(icon)
        if len(icon_list) > 0:
            gtk.window_set_default_icon_list(*icon_list)
        self.window.connect("delete-event", gtk.main_quit)

        # Enable RGBA colormap
        self.gtk_screen = self.window.get_screen()
        colormap = self.gtk_screen.get_rgba_colormap()
        if colormap == None:
            colormap = self.gtk_screen.get_rgb_colormap()
        gtk.widget_set_default_colormap(colormap)

        self.notebook = self.wTree.get_widget("panelCategory")

        refresh = self.wTree.get_widget("buttonRefresh")
        refresh.connect("clicked", self.refresh)

        about = self.wTree.get_widget("buttonAbout")
        about.connect("clicked", self.about)

        close = self.wTree.get_widget("buttonClose")
        close.connect("clicked", gtk.main_quit)

        self.make_menu_model()

        icon_view = gtk.IconView(self.menu_model)
        icon_view.set_text_column(0)
        icon_view.set_pixbuf_column(1)
        icon_view.set_orientation(gtk.ORIENTATION_VERTICAL)
        icon_view.set_selection_mode(gtk.SELECTION_SINGLE)
        icon_view.set_columns(1)
        icon_view.set_item_width(-1)
        icon_view.set_size_request(icon_view.get_item_width(), -1)
        icon_view.connect("selection-changed", self.changeTab)

        iconViewFrame = self.wTree.get_widget('CategoryMenuFrame')
        iconViewFrame.add(icon_view)
        iconViewFrame.show_all()

        #applet
        self.appletManager = awnApplet(self.wTree)

        #launcher
        self.launchManager = awnLauncher(self.wTree)

        #preferences
        self.prefManager = awnPreferences(self.wTree)

        #theme
        self.themeManager = AwnThemeManager(self.wTree)

        self.window.show_all()

    def safe_load_icon(self, name, size, flags = 0):
        try:
            icon = self.theme.load_icon(name, size, flags)
        except gobject.GError:
            # must be on one line due to i18n
            msg = _('Could not load the "%s" icon.  Make sure that the SVG loader for Gtk+ is installed. It usually comes with librsvg, or a package similarly named.') % name
            dialog = gtk.MessageDialog(self.window, 0, gtk.MESSAGE_ERROR, gtk.BUTTONS_OK, msg)
            dialog.run()
            dialog.destroy()
            sys.exit(1)
        return icon
   
    def make_menu_model(self):
        self.menu_model = gtk.ListStore(str, gtk.gdk.Pixbuf)

        pixbuf = self.safe_load_icon("gtk-preferences", 48, gtk.ICON_LOOKUP_FORCE_SVG)
        self.menu_model.append(['General', pixbuf])
        pixbuf = self.safe_load_icon("gtk-sort-ascending", 48, gtk.ICON_LOOKUP_FORCE_SVG)
        self.menu_model.append(['Applets', pixbuf])
        pixbuf = self.safe_load_icon("gtk-fullscreen", 48, gtk.ICON_LOOKUP_FORCE_SVG)
        self.menu_model.append(['Launchers', pixbuf])
        pixbuf = self.safe_load_icon("gtk-home", 48, gtk.ICON_LOOKUP_FORCE_SVG)
        self.menu_model.append(['Themes', pixbuf])

    def changeTab(self, iconView):
        self.notebook.set_current_page(iconView.get_cursor()[0][0])

    def refresh(self, button):
        dialog = gtk.MessageDialog(self.window, 0, gtk.MESSAGE_INFO,
                                   gtk.BUTTONS_OK,
                                   _('AWN has been successfully refreshed'))
        dialog.run()
        dialog.hide()

    def about(self, button):
        self.about = gtk.AboutDialog()
        self.about.set_name(_("Avant Window Navigator"))
        version = '0.3.2.1'
        extra_version = ''
        if len(extra_version) > 0:
            version += extra_version
        self.about.set_version(version)
        self.about.set_copyright("Copyright (C) 2007 Neil Jagdish Patel <njpatel@gmail.com>")
        self.about.set_authors([
            'Neil Jagdish Patel <njpatel@gmail.com>',
            'haytjes <hv1989@gmail.com>',
            'Miika-Petteri Matikainen <miikapetteri@gmail.com>',
            'Anthony Arobone  <aarobone@gmail.com>',
            'Ryan Rushton <ryan@rrdesign.ca>',
            'Michal Hruby  <michal.mhr@gmail.com>',
            'Julien Lavergne <julien.lavergne@gmail.com>',
            'Mark Lee <avant-wn@lazymalevolence.com>',
            'Rodney Cryderman <rcryderman@gmail.com>'
            ])
        self.about.set_comments(_("Fully customisable dock-like window navigator for GNOME."))
        self.about.set_license(
_("This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.") +
"\n\n" +
_("This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.") +
"\n\n" +
_("You should have received a copy of the GNU General Public License along with this program; if not, write to the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA."))
        self.about.set_wrap_license(True)
        self.about.set_website('https://launchpad.net/awn/')
        self.about.set_logo(self.safe_load_icon('avant-window-navigator', 96, gtk.ICON_LOOKUP_USE_BUILTIN))
        self.about.set_documenters(["More to come..."])
        self.about.set_artists(["More to come..."])
        #self.about.set_translator_credits()
        self.about.run()
        self.about.destroy()

    def win_destroy(self, button, w):
        w.destroy()

    def main(self):
        gtk.main()

if __name__ == "__main__":
    awnmanager = AwnManager()
    awnmanager.main()
