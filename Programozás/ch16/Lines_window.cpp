#include "Lines_window.h"

Lines_window::Lines_window(Point xy, int w, int h, const string& title)
    :Window{xy,w,h,title},
    next_button{Point{x_max()-300,0}, 150, 40, "Next point",
        [](Address, Address pw) {reference_to<Lines_window>(pw).next();}},
    quit_button{Point{x_max()-150,0}, 150, 40, "Quit",
        [](Address, Address pw) {reference_to<Lines_window>(pw).quit();}},
    next_x{Point{300,0}, 50, 40, "next x:"},
    next_y{Point{450,0}, 50, 40, "next y:"},
    xy_out{Point{100,0}, 100, 40, "current (x,y):"},
    color_menu{Point{x_max()- 70 , 40},70,20,Menu::vertical,"color"},
    color_button{Point{x_max()-80,40},80,20,"color_menu",
            [](Address, Address pw){
                    reference_to<Lines_window>(pw).cb_color();
            }
        },
    style_menu{Point{0,40},70,20,Menu::vertical,"style"},
    style_button{Point{0,40},80,20,"style_menu",
            [](Address, Address pw){
                    reference_to<Lines_window>(pw).cb_style();
            }}

{
    attach(next_button);
    attach(quit_button);
    attach(next_x);
    attach(next_y);
    attach(xy_out);
    attach(lines);
    color_menu.attach(new Button(Point{0,0},0,0,"red",
        [](Address,Address pw){
            reference_to<Lines_window>(pw).cb_red();
        }
    ));

    color_menu.attach(new Button(Point{0,0},0,0,"blue",
        [](Address,Address pw){
            reference_to<Lines_window>(pw).cb_blue();
        }
    ));

    color_menu.attach(new Button(Point{0,0},0,0,"black",
        [](Address,Address pw){
            reference_to<Lines_window>(pw).cb_black();
        }
    ));

    style_menu.attach(new Button(Point{0,0},0,0,"dot",
        [](Address,Address pw){
            reference_to<Lines_window>(pw).cb_dot();
        }
    ));

    style_menu.attach(new Button(Point{0,0},0,0,"dash",
        [](Address,Address pw){
            reference_to<Lines_window>(pw).cb_dash();
        }
    ));

    style_menu.attach(new Button(Point{0,0},0,0,"solid",
        [](Address,Address pw){
            reference_to<Lines_window>(pw).cb_solid();
        }
    ));

    attach(color_menu);
    attach(style_menu);
    color_menu.hide();
    style_menu.hide();
    attach(color_button);
    attach(style_button);


}
void Lines_window::cb_red()
{

    lines.set_color(Color::red);
    color_menu.hide();
    color_button.show();

}

void Lines_window::cb_blue()
{

    lines.set_color(Color::blue);
    color_menu.hide();
    color_button.show();

}

void Lines_window::cb_black()
{

    lines.set_color(Color::black);
    color_menu.hide();
    color_button.show();

}

void Lines_window::cb_dot()
{

    lines.set_style(Line_style::dot);
    style_menu.hide();
    style_button.show();

}

void Lines_window::cb_dash()
{

    lines.set_style(Line_style::dash);
    style_menu.hide();
    style_button.show();
}

void Lines_window::cb_solid()
{

    lines.set_style(Line_style::solid);
    style_menu.hide();
    style_button.show();
}

void Lines_window::cb_style()
{

    style_button.hide();
    style_menu.show();
    
}

void Lines_window::cb_color()
{

    color_button.hide();
    color_menu.show();
    
}


void Lines_window::quit()
{
    hide();
}

void Lines_window::next()
{
    int x = next_x.get_int();
    int y = next_y.get_int();

    lines.add(Point{x,y});

    ostringstream ss;
    ss << '(' << x << ',' << y << ')';
    xy_out.put(ss.str());

    redraw();
}