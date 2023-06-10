#include <crowindow.hpp>

CroWin::CroWin()
{
    window = nullptr;
    windowTitle = "<3";
    HEIGHT = 600;
    WITDH = 800;
    initGTK();
}

void CroWin::initGTK()
{
    gtk_init(NULL, NULL);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), windowTitle.c_str());
    gtk_window_set_default_size(GTK_WINDOW(window), WITDH, HEIGHT);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);

    gtk_widget_show_all(window);
    
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    
}

void CroWin::run()
{
    gtk_main();
}

CroWin::~CroWin()
{
    gtk_main_quit();
    window = nullptr;
}
