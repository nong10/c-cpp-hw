#include <iostream>
#include <string>
#include "Shapes.h"

void test() {
    Circle cc("circle 1", 1, 0, 3);
    Circle c(cc);
    c.setRadius(4);
    cout << c.area() << c.perimeter() << 
    c.getName() << c.getRadius() << c.getX()
    << c.getY() << endl;
    
    Rectangle rr("rect", 1, 0, 3, 4);
    Rectangle r(rr);
    r.setHeight(5);
    r.setWidth(4);
    cout << r.area() << r.perimeter() <<
    r.getEdgesNumber() << r.getHeight()
    << r.getWidth() << r.getName() << r.getX()
    << r.getY() << endl;

    Square ss("!square!", 1, 0, 5);
    Square s(ss);
    cout << s.area() << s.perimeter() << s.getX()
    << s.getY() << s.getSide() << s.getWidth()
    << s.getHeight() << s.getName() 
    << s.getEdgesNumber() << endl;
}

int main(int argc, char** argv) {

    //Circle(const string& n, double nx, double ny, double r)
    Circle c("first circle", 3, 4, 7);

    //Rectangle(const string& n, double nx, double ny, double nwidth, double nheight)
    Rectangle r("rectangle 1", 1, 0, 3, 4);

    //Square(const string& n, double nx, double ny, double nside)
    Square s("quare 1", 1, 0, 5);


    c.printName();
    cout << c.area() << endl << c.perimeter() << endl;

    r.printName();
    cout << r.area() << endl << r.perimeter() << endl;

    s.printName();
    cout << s.area() << endl << s.perimeter() << endl;
    
    //test();
    return 0;
}
