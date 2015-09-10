#include "windowui.h"
#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

windowui::windowui()
{
    set_default_size(640, 40);
    set_title("wget - user interface");
    set_position(Gtk::WIN_POS_CENTER);

    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    add(*vbox);

    Gtk::Grid *grid = Gtk::manage(new Gtk::Grid);
    grid->set_border_width(10);
    vbox->add(*grid);

    Gtk::Button *b1 = Gtk::manage(new Gtk::Button("Download"));
	grid->attach(*b1, 1, 0.5, 1, 1);
	//b1->signal_clicked().connect(sigc::mem_fun(*this, &windowui::on_b1_click));

	Gtk::Entry *e1 = Gtk::manage(new Gtk::Entry());
	e1->set_hexpand(true);
	e1->set_vexpand(true);
	grid->attach(*e1, 0, 0.5, 1, 1);
    //b1->signal_activate().connect(sigc::mem_fun(*this, &windowui::on_e1_activate));

    b1->signal_clicked().connect(sigc::bind<Gtk::Entry*>(sigc::mem_fun(*this, &windowui::on_b1_click), e1));

	//b1->signal_clicked().connect(sigc::bind <Gtk::Entry*> (sigc::mem_fun(*this, &windowui::on_b1_click), e1));
	//b1->signal_clicked().connect(sigc::bind<Gtk::Entry*>(sigc::ptr_fun(&windowui::on_b1_click), e1));

	vbox->show_all();
}

windowui::~windowui()
{
    //dtor
}

void windowui::on_b1_click(Gtk::Entry *e1)
{
    cout << "=============================================================================" << endl ;
    cout << "Using Link: " << e1->get_text() << endl;
    system("touch ./.tmp");
    ofstream tmp;
    tmp.open(".tmp");
    tmp << e1->get_text() << endl;
    tmp.close();
    system("./script.sh");
}
void windowui::on_e1_activate()
{
    std::cout << "Entry signal is OK !!" << std::endl;
}








