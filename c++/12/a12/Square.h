/*
	CH-230-A 
    a12-p8.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#ifndef _SQUARE_H
#define _SQUARE_H

#include <iostream>
#include "Rectangle.h"

class Square : public Rectangle {
    
    private:
        double side;

    public:                   
        Square(const char *n, double side); // constructor
        ~Square();
        double calcArea() const;
        double calcPerimeter() const;
        double getSide() const {return side;}
        void setSide(double nSide) {side = nSide;}

};

#endif