/*
	CH-230-A 
    a12-p8.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"

class Circle : public Area {
	public:
		Circle(const char *n, double a);
		~Circle();
		double calcArea() const;
        double calcPerimeter() const;
	private:
		double radius;
};

#endif
