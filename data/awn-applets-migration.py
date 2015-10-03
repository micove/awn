#!/usr/bin/env python

import awn

client = awn.Config()

applets = client.get_list(awn.CONFIG_DEFAULT_GROUP, 'applets_list', awn.CONFIG_LIST_STRING)
fixed_applets = []
control = (
    'taskman.desktop',
    'places.desktop',
    'notification-area.desktop',
    'rtm.desktop',
    'calendar.desktop',
    'wobblyzini.desktop',
    'shinyswitcher.desktop',
    'awnsystemmonitor.desktop',
    'awn-meebo.desktop',
    'simple-launcher.desktop',
    'plugger.desktop',
    'trasher.desktop',
    'weather.desktop',
    'battery-applet.desktop',
    'awnterm.desktop',
    'filebrowser.desktop',
    'cairo-clock.desktop',
    'cairo_main_menu.desktop',
    'to-do.desktop',
    'cairo_main_menu_classic.desktop',
    'awn-pandora.desktop',
    'standalone-launcher.desktop',
    'comic.desktop',
    'digitalClock.desktop',
    'vala-test.desktop',
    'switcher.desktop',
    'main-menu.desktop',
    'media-icon-next.desktop',
    'mimenu.desktop',
    'comics.desktop',
    'arss.desktop',
    'lastfm.desktop',
    'media-control.desktop',
    'showdesktop.desktop',
    'quit-applet.desktop',
    'separator.desktop',
    'python-test.desktop',
    'awnnotificationdaemon.desktop',
    'mount-applet.desktop',
    'thinkhdaps.desktop',
    'Taskmand-applet.desktop',
    'stacks.desktop',
    'tsclient-app.desktop',
    'file-browser-launcher.desktop',
    'mail.desktop',
    'media-icon-play.desktop',
    'trash.desktop',
    'volume-control.desktop',
    'webapplet.desktop',
    'affinity.desktop',
    'media-icon-back.desktop',
    'tomboy-applet.desktop'
    )

for applet in applets:
    if len([1 for elem in control if applet.find(elem) != -1]) > 0:
        fixed_applets.append(applet.replace('/lib/awn/', '/share/avant-window-navigator/').replace('/share/awn/', '/share/avant-window-navigator/'))
    else:
        fixed_applets.append(applet)
if fixed_applets <> applets:
    client.set_list(awn.CONFIG_DEFAULT_GROUP, 'applets_list', awn.CONFIG_LIST_STRING, fixed_applets)
