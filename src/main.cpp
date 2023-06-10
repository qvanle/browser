#include <gtk/gtk.h>
#include <webkit2/webkit2.h>


#include <crowindow.hpp>


#include <iostream>


int main()
{
    std::cout << "Running..." << std::endl;
    
    CroWin *window;
    window = new CroWin();
    window->run();

    delete window;
    
    std::cout << "Done!" << std::endl;
    
    return 0;
}
