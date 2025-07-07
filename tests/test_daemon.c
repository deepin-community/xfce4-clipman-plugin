#include <glib.h>
#include <gtk/gtk.h>
#include <clipboard-manager/daemon.h>

int main (int argc, char *argv[])
{
  XcpClipboardManager *daemon;

  gtk_init (&argc, &argv);

  daemon = xcp_clipboard_manager_get ();

  gtk_main ();

  g_object_unref (daemon);

  return 0;
}

