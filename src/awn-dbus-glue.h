/* Generated by dbus-binding-tool; do not edit! */


#ifndef __dbus_glib_marshal_awn_task_manager_MARSHAL_H__
#define __dbus_glib_marshal_awn_task_manager_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

#ifdef G_ENABLE_DEBUG
#define g_marshal_value_peek_boolean(v)  g_value_get_boolean (v)
#define g_marshal_value_peek_char(v)     g_value_get_char (v)
#define g_marshal_value_peek_uchar(v)    g_value_get_uchar (v)
#define g_marshal_value_peek_int(v)      g_value_get_int (v)
#define g_marshal_value_peek_uint(v)     g_value_get_uint (v)
#define g_marshal_value_peek_long(v)     g_value_get_long (v)
#define g_marshal_value_peek_ulong(v)    g_value_get_ulong (v)
#define g_marshal_value_peek_int64(v)    g_value_get_int64 (v)
#define g_marshal_value_peek_uint64(v)   g_value_get_uint64 (v)
#define g_marshal_value_peek_enum(v)     g_value_get_enum (v)
#define g_marshal_value_peek_flags(v)    g_value_get_flags (v)
#define g_marshal_value_peek_float(v)    g_value_get_float (v)
#define g_marshal_value_peek_double(v)   g_value_get_double (v)
#define g_marshal_value_peek_string(v)   (char*) g_value_get_string (v)
#define g_marshal_value_peek_param(v)    g_value_get_param (v)
#define g_marshal_value_peek_boxed(v)    g_value_get_boxed (v)
#define g_marshal_value_peek_pointer(v)  g_value_get_pointer (v)
#define g_marshal_value_peek_object(v)   g_value_get_object (v)
#else /* !G_ENABLE_DEBUG */
/* WARNING: This code accesses GValues directly, which is UNSUPPORTED API.
 *          Do not access GValues directly in your code. Instead, use the
 *          g_value_get_*() functions
 */
#define g_marshal_value_peek_boolean(v)  (v)->data[0].v_int
#define g_marshal_value_peek_char(v)     (v)->data[0].v_int
#define g_marshal_value_peek_uchar(v)    (v)->data[0].v_uint
#define g_marshal_value_peek_int(v)      (v)->data[0].v_int
#define g_marshal_value_peek_uint(v)     (v)->data[0].v_uint
#define g_marshal_value_peek_long(v)     (v)->data[0].v_long
#define g_marshal_value_peek_ulong(v)    (v)->data[0].v_ulong
#define g_marshal_value_peek_int64(v)    (v)->data[0].v_int64
#define g_marshal_value_peek_uint64(v)   (v)->data[0].v_uint64
#define g_marshal_value_peek_enum(v)     (v)->data[0].v_long
#define g_marshal_value_peek_flags(v)    (v)->data[0].v_ulong
#define g_marshal_value_peek_float(v)    (v)->data[0].v_float
#define g_marshal_value_peek_double(v)   (v)->data[0].v_double
#define g_marshal_value_peek_string(v)   (v)->data[0].v_pointer
#define g_marshal_value_peek_param(v)    (v)->data[0].v_pointer
#define g_marshal_value_peek_boxed(v)    (v)->data[0].v_pointer
#define g_marshal_value_peek_pointer(v)  (v)->data[0].v_pointer
#define g_marshal_value_peek_object(v)   (v)->data[0].v_pointer
#endif /* !G_ENABLE_DEBUG */


/* BOOLEAN:INT64,POINTER (/tmp/dbus-binding-tool-c-marshallers.J5M1OU:1) */
extern void dbus_glib_marshal_awn_task_manager_BOOLEAN__INT64_POINTER (GClosure     *closure,
                                                                       GValue       *return_value,
                                                                       guint         n_param_values,
                                                                       const GValue *param_values,
                                                                       gpointer      invocation_hint,
                                                                       gpointer      marshal_data);
void
dbus_glib_marshal_awn_task_manager_BOOLEAN__INT64_POINTER (GClosure     *closure,
                                                           GValue       *return_value G_GNUC_UNUSED,
                                                           guint         n_param_values,
                                                           const GValue *param_values,
                                                           gpointer      invocation_hint G_GNUC_UNUSED,
                                                           gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__INT64_POINTER) (gpointer     data1,
                                                           gint64       arg_1,
                                                           gpointer     arg_2,
                                                           gpointer     data2);
  register GMarshalFunc_BOOLEAN__INT64_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 3);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__INT64_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_int64 (param_values + 1),
                       g_marshal_value_peek_pointer (param_values + 2),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:STRING,STRING,BOOLEAN,POINTER,POINTER (/tmp/dbus-binding-tool-c-marshallers.J5M1OU:2) */
extern void dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_STRING_BOOLEAN_POINTER_POINTER (GClosure     *closure,
                                                                                               GValue       *return_value,
                                                                                               guint         n_param_values,
                                                                                               const GValue *param_values,
                                                                                               gpointer      invocation_hint,
                                                                                               gpointer      marshal_data);
void
dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_STRING_BOOLEAN_POINTER_POINTER (GClosure     *closure,
                                                                                   GValue       *return_value G_GNUC_UNUSED,
                                                                                   guint         n_param_values,
                                                                                   const GValue *param_values,
                                                                                   gpointer      invocation_hint G_GNUC_UNUSED,
                                                                                   gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__STRING_STRING_BOOLEAN_POINTER_POINTER) (gpointer     data1,
                                                                                   gpointer     arg_1,
                                                                                   gpointer     arg_2,
                                                                                   gboolean     arg_3,
                                                                                   gpointer     arg_4,
                                                                                   gpointer     arg_5,
                                                                                   gpointer     data2);
  register GMarshalFunc_BOOLEAN__STRING_STRING_BOOLEAN_POINTER_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 6);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__STRING_STRING_BOOLEAN_POINTER_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_string (param_values + 1),
                       g_marshal_value_peek_string (param_values + 2),
                       g_marshal_value_peek_boolean (param_values + 3),
                       g_marshal_value_peek_pointer (param_values + 4),
                       g_marshal_value_peek_pointer (param_values + 5),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:INT64,INT,POINTER (/tmp/dbus-binding-tool-c-marshallers.J5M1OU:3) */
extern void dbus_glib_marshal_awn_task_manager_BOOLEAN__INT64_INT_POINTER (GClosure     *closure,
                                                                           GValue       *return_value,
                                                                           guint         n_param_values,
                                                                           const GValue *param_values,
                                                                           gpointer      invocation_hint,
                                                                           gpointer      marshal_data);
void
dbus_glib_marshal_awn_task_manager_BOOLEAN__INT64_INT_POINTER (GClosure     *closure,
                                                               GValue       *return_value G_GNUC_UNUSED,
                                                               guint         n_param_values,
                                                               const GValue *param_values,
                                                               gpointer      invocation_hint G_GNUC_UNUSED,
                                                               gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__INT64_INT_POINTER) (gpointer     data1,
                                                               gint64       arg_1,
                                                               gint         arg_2,
                                                               gpointer     arg_3,
                                                               gpointer     data2);
  register GMarshalFunc_BOOLEAN__INT64_INT_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 4);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__INT64_INT_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_int64 (param_values + 1),
                       g_marshal_value_peek_int (param_values + 2),
                       g_marshal_value_peek_pointer (param_values + 3),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:STRING,STRING,POINTER (/tmp/dbus-binding-tool-c-marshallers.J5M1OU:4) */
extern void dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_STRING_POINTER (GClosure     *closure,
                                                                               GValue       *return_value,
                                                                               guint         n_param_values,
                                                                               const GValue *param_values,
                                                                               gpointer      invocation_hint,
                                                                               gpointer      marshal_data);
void
dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_STRING_POINTER (GClosure     *closure,
                                                                   GValue       *return_value G_GNUC_UNUSED,
                                                                   guint         n_param_values,
                                                                   const GValue *param_values,
                                                                   gpointer      invocation_hint G_GNUC_UNUSED,
                                                                   gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__STRING_STRING_POINTER) (gpointer     data1,
                                                                   gpointer     arg_1,
                                                                   gpointer     arg_2,
                                                                   gpointer     arg_3,
                                                                   gpointer     data2);
  register GMarshalFunc_BOOLEAN__STRING_STRING_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 4);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__STRING_STRING_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_string (param_values + 1),
                       g_marshal_value_peek_string (param_values + 2),
                       g_marshal_value_peek_pointer (param_values + 3),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:STRING,STRING,STRING,POINTER,POINTER (/tmp/dbus-binding-tool-c-marshallers.J5M1OU:5) */
extern void dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_STRING_STRING_POINTER_POINTER (GClosure     *closure,
                                                                                              GValue       *return_value,
                                                                                              guint         n_param_values,
                                                                                              const GValue *param_values,
                                                                                              gpointer      invocation_hint,
                                                                                              gpointer      marshal_data);
void
dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_STRING_STRING_POINTER_POINTER (GClosure     *closure,
                                                                                  GValue       *return_value G_GNUC_UNUSED,
                                                                                  guint         n_param_values,
                                                                                  const GValue *param_values,
                                                                                  gpointer      invocation_hint G_GNUC_UNUSED,
                                                                                  gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__STRING_STRING_STRING_POINTER_POINTER) (gpointer     data1,
                                                                                  gpointer     arg_1,
                                                                                  gpointer     arg_2,
                                                                                  gpointer     arg_3,
                                                                                  gpointer     arg_4,
                                                                                  gpointer     arg_5,
                                                                                  gpointer     data2);
  register GMarshalFunc_BOOLEAN__STRING_STRING_STRING_POINTER_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 6);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__STRING_STRING_STRING_POINTER_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_string (param_values + 1),
                       g_marshal_value_peek_string (param_values + 2),
                       g_marshal_value_peek_string (param_values + 3),
                       g_marshal_value_peek_pointer (param_values + 4),
                       g_marshal_value_peek_pointer (param_values + 5),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:INT,POINTER,POINTER (/tmp/dbus-binding-tool-c-marshallers.J5M1OU:6) */
extern void dbus_glib_marshal_awn_task_manager_BOOLEAN__INT_POINTER_POINTER (GClosure     *closure,
                                                                             GValue       *return_value,
                                                                             guint         n_param_values,
                                                                             const GValue *param_values,
                                                                             gpointer      invocation_hint,
                                                                             gpointer      marshal_data);
void
dbus_glib_marshal_awn_task_manager_BOOLEAN__INT_POINTER_POINTER (GClosure     *closure,
                                                                 GValue       *return_value G_GNUC_UNUSED,
                                                                 guint         n_param_values,
                                                                 const GValue *param_values,
                                                                 gpointer      invocation_hint G_GNUC_UNUSED,
                                                                 gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__INT_POINTER_POINTER) (gpointer     data1,
                                                                 gint         arg_1,
                                                                 gpointer     arg_2,
                                                                 gpointer     arg_3,
                                                                 gpointer     data2);
  register GMarshalFunc_BOOLEAN__INT_POINTER_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 4);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__INT_POINTER_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_int (param_values + 1),
                       g_marshal_value_peek_pointer (param_values + 2),
                       g_marshal_value_peek_pointer (param_values + 3),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:STRING,INT,POINTER (/tmp/dbus-binding-tool-c-marshallers.J5M1OU:7) */
extern void dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_INT_POINTER (GClosure     *closure,
                                                                            GValue       *return_value,
                                                                            guint         n_param_values,
                                                                            const GValue *param_values,
                                                                            gpointer      invocation_hint,
                                                                            gpointer      marshal_data);
void
dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_INT_POINTER (GClosure     *closure,
                                                                GValue       *return_value G_GNUC_UNUSED,
                                                                guint         n_param_values,
                                                                const GValue *param_values,
                                                                gpointer      invocation_hint G_GNUC_UNUSED,
                                                                gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__STRING_INT_POINTER) (gpointer     data1,
                                                                gpointer     arg_1,
                                                                gint         arg_2,
                                                                gpointer     arg_3,
                                                                gpointer     data2);
  register GMarshalFunc_BOOLEAN__STRING_INT_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 4);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__STRING_INT_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_string (param_values + 1),
                       g_marshal_value_peek_int (param_values + 2),
                       g_marshal_value_peek_pointer (param_values + 3),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:STRING,POINTER (/tmp/dbus-binding-tool-c-marshallers.J5M1OU:8) */
extern void dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_POINTER (GClosure     *closure,
                                                                        GValue       *return_value,
                                                                        guint         n_param_values,
                                                                        const GValue *param_values,
                                                                        gpointer      invocation_hint,
                                                                        gpointer      marshal_data);
void
dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_POINTER (GClosure     *closure,
                                                            GValue       *return_value G_GNUC_UNUSED,
                                                            guint         n_param_values,
                                                            const GValue *param_values,
                                                            gpointer      invocation_hint G_GNUC_UNUSED,
                                                            gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__STRING_POINTER) (gpointer     data1,
                                                            gpointer     arg_1,
                                                            gpointer     arg_2,
                                                            gpointer     data2);
  register GMarshalFunc_BOOLEAN__STRING_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 3);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__STRING_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_string (param_values + 1),
                       g_marshal_value_peek_pointer (param_values + 2),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:STRING,INT,BOOLEAN,POINTER (/tmp/dbus-binding-tool-c-marshallers.J5M1OU:9) */
extern void dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_INT_BOOLEAN_POINTER (GClosure     *closure,
                                                                                    GValue       *return_value,
                                                                                    guint         n_param_values,
                                                                                    const GValue *param_values,
                                                                                    gpointer      invocation_hint,
                                                                                    gpointer      marshal_data);
void
dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_INT_BOOLEAN_POINTER (GClosure     *closure,
                                                                        GValue       *return_value G_GNUC_UNUSED,
                                                                        guint         n_param_values,
                                                                        const GValue *param_values,
                                                                        gpointer      invocation_hint G_GNUC_UNUSED,
                                                                        gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__STRING_INT_BOOLEAN_POINTER) (gpointer     data1,
                                                                        gpointer     arg_1,
                                                                        gint         arg_2,
                                                                        gboolean     arg_3,
                                                                        gpointer     arg_4,
                                                                        gpointer     data2);
  register GMarshalFunc_BOOLEAN__STRING_INT_BOOLEAN_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 5);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__STRING_INT_BOOLEAN_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_string (param_values + 1),
                       g_marshal_value_peek_int (param_values + 2),
                       g_marshal_value_peek_boolean (param_values + 3),
                       g_marshal_value_peek_pointer (param_values + 4),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:INT64,STRING,POINTER (/tmp/dbus-binding-tool-c-marshallers.J5M1OU:10) */
extern void dbus_glib_marshal_awn_task_manager_BOOLEAN__INT64_STRING_POINTER (GClosure     *closure,
                                                                              GValue       *return_value,
                                                                              guint         n_param_values,
                                                                              const GValue *param_values,
                                                                              gpointer      invocation_hint,
                                                                              gpointer      marshal_data);
void
dbus_glib_marshal_awn_task_manager_BOOLEAN__INT64_STRING_POINTER (GClosure     *closure,
                                                                  GValue       *return_value G_GNUC_UNUSED,
                                                                  guint         n_param_values,
                                                                  const GValue *param_values,
                                                                  gpointer      invocation_hint G_GNUC_UNUSED,
                                                                  gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__INT64_STRING_POINTER) (gpointer     data1,
                                                                  gint64       arg_1,
                                                                  gpointer     arg_2,
                                                                  gpointer     arg_3,
                                                                  gpointer     data2);
  register GMarshalFunc_BOOLEAN__INT64_STRING_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 4);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__INT64_STRING_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_int64 (param_values + 1),
                       g_marshal_value_peek_string (param_values + 2),
                       g_marshal_value_peek_pointer (param_values + 3),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

G_END_DECLS

#endif /* __dbus_glib_marshal_awn_task_manager_MARSHAL_H__ */

#include <dbus/dbus-glib.h>
static const DBusGMethodInfo dbus_glib_awn_task_manager_methods[] = {
  { (GCallback) awn_task_manager_get_task_by_pid, dbus_glib_marshal_awn_task_manager_BOOLEAN__INT_POINTER_POINTER, 0 },
  { (GCallback) awn_task_manager_set_task_icon, dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_STRING_POINTER, 57 },
  { (GCallback) awn_task_manager_set_task_progress, dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_INT_POINTER, 115 },
  { (GCallback) awn_task_manager_set_task_info, dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_STRING_POINTER, 176 },
  { (GCallback) awn_task_manager_set_task_icon_by_name, dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_STRING_POINTER, 229 },
  { (GCallback) awn_task_manager_set_task_icon_by_xid, dbus_glib_marshal_awn_task_manager_BOOLEAN__INT64_STRING_POINTER, 293 },
  { (GCallback) awn_task_manager_unset_task_icon_by_name, dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_POINTER, 355 },
  { (GCallback) awn_task_manager_unset_task_icon_by_xid, dbus_glib_marshal_awn_task_manager_BOOLEAN__INT64_POINTER, 407 },
  { (GCallback) awn_task_manager_set_progress_by_name, dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_INT_POINTER, 457 },
  { (GCallback) awn_task_manager_set_progress_by_xid, dbus_glib_marshal_awn_task_manager_BOOLEAN__INT64_INT_POINTER, 520 },
  { (GCallback) awn_task_manager_set_info_by_name, dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_STRING_POINTER, 581 },
  { (GCallback) awn_task_manager_set_info_by_xid, dbus_glib_marshal_awn_task_manager_BOOLEAN__INT64_STRING_POINTER, 636 },
  { (GCallback) awn_task_manager_unset_info_by_name, dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_POINTER, 689 },
  { (GCallback) awn_task_manager_unset_info_by_xid, dbus_glib_marshal_awn_task_manager_BOOLEAN__INT64_POINTER, 737 },
  { (GCallback) awn_task_manager_add_task_menu_item_by_name, dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_STRING_STRING_POINTER_POINTER, 783 },
  { (GCallback) awn_task_manager_add_task_check_item_by_name, dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_STRING_BOOLEAN_POINTER_POINTER, 875 },
  { (GCallback) awn_task_manager_set_task_check_item_by_name, dbus_glib_marshal_awn_task_manager_BOOLEAN__STRING_INT_BOOLEAN_POINTER, 966 },
};

const DBusGObjectInfo dbus_glib_awn_task_manager_object_info = {
  0,
  dbus_glib_awn_task_manager_methods,
  17,
"com.google.code.Awn\0GetTaskByPid\0S\0pid\0I\0i\0name\0O\0F\0N\0s\0\0com.google.code.Awn\0SetTaskIcon\0S\0name\0I\0s\0icon_path\0I\0s\0\0com.google.code.Awn\0SetTaskProgress\0S\0name\0I\0s\0progress\0I\0i\0\0com.google.code.Awn\0SetTaskInfo\0S\0name\0I\0s\0info\0I\0s\0\0com.google.code.Awn\0SetTaskIconByName\0S\0name\0I\0s\0icon_path\0I\0s\0\0com.google.code.Awn\0SetTaskIconByXid\0S\0xid\0I\0x\0icon_path\0I\0s\0\0com.google.code.Awn\0UnsetTaskIconByName\0S\0name\0I\0s\0\0com.google.code.Awn\0UnsetTaskIconByXid\0S\0xid\0I\0x\0\0com.google.code.Awn\0SetProgressByName\0S\0name\0I\0s\0progress\0I\0i\0\0com.google.code.Awn\0SetProgressByXid\0S\0xid\0I\0x\0progress\0I\0i\0\0com.google.code.Awn\0SetInfoByName\0S\0name\0I\0s\0info\0I\0s\0\0com.google.code.Awn\0SetInfoByXid\0S\0xid\0I\0x\0info\0I\0s\0\0com.google.code.Awn\0UnsetInfoByName\0S\0name\0I\0s\0\0com.google.code.Awn\0UnsetInfoByXid\0S\0xid\0I\0x\0\0com.google.code.Awn\0AddTaskMenuItemByName\0S\0name\0I\0s\0stock_id\0I\0s\0item_name\0I\0s\0id\0O\0F\0N\0i\0\0com.google.code.Awn\0AddTaskCheckItemByName\0S\0name\0I\0s\0item_name\0I\0s\0active\0I\0b\0id\0O\0F\0N\0i\0\0com.google.code.Awn\0SetTaskCheckItemByName\0S\0name\0I\0s\0id\0I\0i\0active\0I\0b\0\0\0",
"com.google.code.Awn\0MenuItemClicked\0com.google.code.Awn\0CheckItemClicked\0\0",
"\0"
};

