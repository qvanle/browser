#include <gtk/gtk.h>
#include <webkit2/webkit2.h>
#include <iostream>

void init()
{
    gtk_init(NULL, NULL);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(window), 800, 600);
    gtk_window_set_title(GTK_WINDOW(window), "Webkit2GTK+");

    GtkWidget *webview = webkit_web_view_new();
    webkit_web_view_load_uri(WEBKIT_WEB_VIEW(webview), "http://www.google.com");

    gtk_container_add(GTK_CONTAINER(window), webview);

    gtk_widget_show_all(window);

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    gtk_main();
}

int main()
{
    std::cout << "Running..." << std::endl;
    
    init();
    
    std::cout << "Done!" << std::endl;
    return 0;
}
