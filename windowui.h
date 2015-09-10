#ifndef WINDOWUI_H
#define WINDOWUI_H

#include <gtkmm.h>

using namespace std;

class windowui : public Gtk::Window
{
    public:
        windowui();
        virtual ~windowui();
    protected:
        void on_b1_click(Gtk::Entry *e1);
        void on_e1_activate();
    private:
};

#endif // WINDOWUI_H
