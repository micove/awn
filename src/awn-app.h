/* awn-app.h generated by valac 0.12.1, the Vala compiler, do not modify */


#ifndef __AWN_APP_H__
#define __AWN_APP_H__

#include <glib.h>
#include <glib-object.h>
#include <dbus/dbus-glib.h>
#include <stdlib.h>
#include <string.h>
#include <dbus/dbus-glib-lowlevel.h>

G_BEGIN_DECLS


#define AWN_TYPE_APP_DBUS_INTERFACE (awn_app_dbus_interface_get_type ())
#define AWN_APP_DBUS_INTERFACE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), AWN_TYPE_APP_DBUS_INTERFACE, AwnAppDBusInterface))
#define AWN_IS_APP_DBUS_INTERFACE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), AWN_TYPE_APP_DBUS_INTERFACE))
#define AWN_APP_DBUS_INTERFACE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), AWN_TYPE_APP_DBUS_INTERFACE, AwnAppDBusInterfaceIface))

typedef struct _AwnAppDBusInterface AwnAppDBusInterface;
typedef struct _AwnAppDBusInterfaceIface AwnAppDBusInterfaceIface;

#define AWN_TYPE_APPLICATION (awn_application_get_type ())
#define AWN_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), AWN_TYPE_APPLICATION, AwnApplication))
#define AWN_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), AWN_TYPE_APPLICATION, AwnApplicationClass))
#define AWN_IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), AWN_TYPE_APPLICATION))
#define AWN_IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), AWN_TYPE_APPLICATION))
#define AWN_APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), AWN_TYPE_APPLICATION, AwnApplicationClass))

typedef struct _AwnApplication AwnApplication;
typedef struct _AwnApplicationClass AwnApplicationClass;
typedef struct _AwnApplicationPrivate AwnApplicationPrivate;

struct _AwnAppDBusInterfaceIface {
	GTypeInterface parent_iface;
	gchar** (*get_panels) (AwnAppDBusInterface* self, int* result_length1, GError** error);
	void (*remove_panel) (AwnAppDBusInterface* self, gint panel_id, GError** error);
};

struct _AwnApplication {
	GObject parent_instance;
	AwnApplicationPrivate * priv;
};

struct _AwnApplicationClass {
	GObjectClass parent_class;
};


AwnAppDBusInterface* awn_app_dbus_interface_dbus_proxy_new (DBusGConnection* connection, const char* name, const char* path);
GType awn_app_dbus_interface_get_type (void) G_GNUC_CONST;
gchar** awn_app_dbus_interface_get_panels (AwnAppDBusInterface* self, int* result_length1, GError** error);
void awn_app_dbus_interface_remove_panel (AwnAppDBusInterface* self, gint panel_id, GError** error);
GType awn_application_get_type (void) G_GNUC_CONST;
AwnApplication* awn_application_get_default (void);


G_END_DECLS

#endif