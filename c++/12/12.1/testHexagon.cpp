#include "Shapes.h"
#include <iostream>

using namespace std;

int main() {
    Hexagon h1("h1", 0, 0, 6, "blue", 9);
    Hexagon h2("h2", 0, 0, 6, "green", 15);
    Hexagon h3(h2);
    cout << h1.perimeter() << " " << h1.area() << endl;
    cout << h2.perimeter() << " " << h2.area() << endl;
    cout << h3.perimeter() << " " << h3.area() << endl;
    return 0;
}
