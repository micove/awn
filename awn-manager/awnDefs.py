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
#  Author: Neil Jagdish Patel <njpatel@gmail.com>
#
#  Notes: Avant Window Navigator preferences window

import sys, os
from awn import CONFIG_DEFAULT_GROUP as DEFAULT_GROUP

PREFIX = "/usr/local"

LOCALEDIR = os.path.join (PREFIX, "share", "locale")
PKGDATADIR = '/usr/local/share/avant-window-navigator'

HOME_CONFIG_DIR = os.path.join(os.path.expanduser("~"), ".config", "awn")
HOME_APPLET_DIR = os.path.join(HOME_CONFIG_DIR, "applets")
HOME_LAUNCHERS_DIR = os.path.join(HOME_CONFIG_DIR, "launchers")
HOME_THEME_DIR = os.path.join(HOME_CONFIG_DIR, "themes")
HOME_CUSTOM_ICONS_DIR = os.path.join(HOME_CONFIG_DIR, "custom-icons")


# AwnConfigClient Groups/Keys
AWN                 = DEFAULT_GROUP        #group
AUTO_HIDE           = "auto_hide"          #bool
PANEL_MODE          = "panel_mode"         #bool
KEEP_BELOW          = "keep_below"         #bool

BAR                 = "bar"                #group
ROUNDED_CORNERS     = "rounded_corners"    #bool
CORNER_RADIUS       = "corner_radius"      #float
RENDER_PATTERN      = "render_pattern"     #bool
PATTERN_URI         = "pattern_uri"        #string
PATTERN_ALPHA       = "pattern_alpha"      #float
GLASS_STEP_1        = "glass_step_1"       #string
GLASS_STEP_2        = "glass_step_2"       #string
GLASS_HISTEP_1      = "glass_histep_1"     #string
GLASS_HISTEP_2      = "glass_histep_2"     #string
BORDER_COLOR        = "border_color"       #string
HILIGHT_COLOR       = "hilight_color"      #string
SHOW_SEPARATOR      = "show_separator"     #bool
SEP_COLOR           = "sep_color"

BAR_HEIGHT          = "bar_height"         #int
BAR_ANGLE           = "bar_angle"          #int
ICON_OFFSET         = "icon_offset"        #int

WINMAN              = "window_manager"     #group
SHOW_ALL_WINS       = "show_all_windows"   #bool
LAUNCHERS           = "launchers"          #list

APP                 = "app"                #group
ACTIVE_PNG          = "active_png"         #string
ARROW_COLOR         = "arrow_color"        #color
TASKS_H_ARROWS      = "tasks_have_arrows"  #bool
ARROW_OFFSET        = "arrow_offset"
ICON_EFFECT         = "icon_effect"        #int
NAME_CHANGE_NOTIFY  = "name_change_notify" #bool

TITLE               = "title"              #group
TEXT_COLOR          = "text_color"         #color
SHADOW_COLOR        = "shadow_color"       #color
BACKGROUND          = "background"         #color
FONT_FACE           = "font_face"          #string

APPLETS             = "applets"            #group
APPLET_LIST         = "applets_list"       #list

# i18n-related
I18N_DOMAIN = "avant-window-navigator"

def i18nize(symbol_table):
    import locale
    import gettext
    locale.setlocale(locale.LC_ALL, '')
    gettext.bindtextdomain(I18N_DOMAIN, LOCALEDIR)
    gettext.textdomain(I18N_DOMAIN)
    symbol_table['_'] = gettext.gettext
