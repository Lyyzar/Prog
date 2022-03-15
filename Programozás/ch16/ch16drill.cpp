#include "Lines_window.h"
#include "Graph.h"
#include "GUI.h"

/*
    g++ ch16drill.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/


int main(){
using namespace Graph_lib;

int x_max=1000;
int y_max=800;

	Lines_window win{Point{100, 100}, x_max, y_max,"Lines"};
	Open_polyline lines;
	

	return gui_main();







	return 0;
}