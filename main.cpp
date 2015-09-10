#include <gtkmm.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "windowui.h"

using namespace std;


int main(int argc, char *argv[])
{
    system("chmod +x ./script.sh");
    //system("./bin/Debug/wget-ui 2>/dev/null");

    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "com.gtkmm.wgetui.base");

    windowui window;

    return app->run(window);
}


