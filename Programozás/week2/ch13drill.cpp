/*
    g++ main.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"


int main()
{
    using namespace Graph_lib;

    	int xmax = 800;
    	int ymax = 1000;
	
    Simple_window win {Point{100,100}, xmax, ymax, "Canvas"};
    
    
    int x_size = 800;
    int y_size = 800;
    int x_grid = 100;
    int y_grid = 100;

    Lines grid;
    for (int x = x_grid; x <= x_size; x += x_grid)
        grid.add(Point{x, 0}, Point{x, y_size});    
    for (int y = y_grid; y <= y_size; y += y_grid)
        grid.add(Point{0, y}, Point{x_size, y});
        
       Vector_ref<Rectangle> rect;
       
       for(int i=0;i<8;++i)
       	
       {
       	for(int j=0;j<8;++j)
       	{
       		rect.push_back(new Rectangle{Point{i*100,j*100},100,100});
       		if(i==j) rect[rect.size()-1].set_fill_color(Color::red);
       		win.attach(rect[rect.size()-1]);
		}	

       }
        	
        	Image i1 {Point{100,100}, "200.jpg"};
        	Image i2 {Point{300,400}, "200.jpg"};
        	Image i3 {Point{0,600}, "200.jpg"};
        	Image i4 {Point{400,0}, "100.jpg"};
        	
        	
        win.attach(grid);
        win.attach(i1);
        win.attach(i2);
        win.attach(i3);
        win.attach(i4);
        
        	
        			win.wait_for_button();
        			i4.move(100,0);
        			win.wait_for_button();
        			i4.move(0,100);
        			win.wait_for_button();
        			i4.move(100,100);
        			win.wait_for_button();
        			i4.move(100,0);
        		
        		
       
        
       
        win.wait_for_button();

}
