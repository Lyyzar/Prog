#include "Simple_window.h"
#include "Graph.h"
/*
    g++ main.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/


double one(double x) {return 1;}
	double slope(double x) {return x/2;}
	double square(double x) {return x*x;}
	double sloping_cos(double x) {return slope(x) + cos(x);}


int main(){
using namespace Graph_lib;

	int xmax = 600;
    	int ymax = 600;
	
    Simple_window win {Point{100,100}, xmax, ymax, "Function graphs"};
    
    Axis x (Axis::x,Point{100,300},400,20,"1 = = 20 pixels");
    Axis y (Axis::y,Point{300,500},400,20,"1 = = 20 pixels");

	x.set_color(Color::red);
	y.set_color(Color::red);
	
	Point origo(300,300);
	constexpr int r_min=-11;
	constexpr int r_max=10;
	constexpr int n_points=400;
	constexpr int x_scale=20;
	constexpr int y_scale=20;
	
	
	
	Text func{Point{50,400},"x/2"};
	Function a{one,r_min,r_max,origo,n_points,x_scale,y_scale};
	Function b{slope,r_min,r_max,origo,n_points,x_scale,y_scale};
	Function c{square,r_min,r_max,origo,n_points,x_scale,y_scale};
	Function e{cos,r_min,r_max,origo,n_points,x_scale,y_scale};
	Function d{sloping_cos,r_min,r_max,origo,n_points,x_scale,y_scale};
	
	e.set_color(Color::blue);
	
	win.attach(func);
	win.attach(a);
	win.attach(b);
	win.attach(c);
	win.attach(e);
	win.attach(d);
	win.attach(x);
	win.attach(y);
	
win.wait_for_button();

 




return 0;
}
