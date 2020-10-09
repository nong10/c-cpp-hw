/*
	CH-230-A 
    a12-p8.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include "Square.h"
#include <iostream>

Square::Square(const char *n, double side) : Rectangle(n, side, side) {
    this -> side = side;
}

Square::~Square() {}

double Square::calcArea() const {
    std::cout << "calcArea of Square...";
    return side * side;
}

double Square::calcPerimeter() const {
    std::cout << "calcPerimeter of Square...";
    return side * 4;
}