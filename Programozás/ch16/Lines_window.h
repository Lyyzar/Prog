#include "GUI.h"

using namespace Graph_lib;

struct Lines_window : Graph_lib::Window {
	Lines_window(Point xy, int w, int h, const string& title );
	Open_polyline lines;

	bool wait_for_button();

private:
	Button next_button;
	Button quit_button;
	In_box next_x;
	In_box next_y;
	Out_box xy_out;
	Menu color_menu;
	Button color_button;
	Menu style_menu;
	Button style_button;

	void next();
	void quit();
	void cb_red();
	void cb_blue();
	void cb_black();
	void cb_style();
	void cb_color();
	void cb_dot();
	void cb_dash();
	void cb_solid();

};