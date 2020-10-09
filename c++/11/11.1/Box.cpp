/*
	CH-230-A 
    a11-p1.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

// constructors:
Box::Box() {

}

Box::Box(double newHeight, double newWidth, double newDepth) {
    height = newHeight;
    width = newWidth;
    depth = newDepth;
}

// copy constructor:
Box::Box(Box &b) {
    height = b.getHeight();
    width = b.getWidth();
    depth = b.getDepth();
}

// setters:
void Box::setHeight(double newHeight) {
    height = newHeight;
}

void Box::setWidth(double newWidth) {
    width = newWidth;
}

void Box::setDepth(double newDepth) {
    depth = newDepth;
}

// getters:
double Box::getHeight() {
    return height;
}

double Box::getWidth() {
    return width;
}

double Box::getDepth() {
    return depth;
}