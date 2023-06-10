#ifndef CROWINDOW 
#define CROWINDOW

#include <gtk/gtk.h>
#include <webkit2/webkit2.h>

#include <string>

class CroWin
{
private:
    GtkWidget *window;
    std::string windowTitle;
    int HEIGHT;
    int WITDH;
protected:
    void initGTK();
public:
    CroWin();
    
    void run();

    ~CroWin();
};

#endif
