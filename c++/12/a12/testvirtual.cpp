/*
	CH-230-A 
    a12-p8.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"

/*
                    Area
                  /      \
           Rectangle      Circle
                |           | 
             Square        Ring    
*/ 

const int num_obj = 6;
int main() {
	Area *list[num_obj];						
    // (1) an array contains pointers to Area and subclass of Area has been created
	int index = 0;								
    // (2) an integer has been created
	double sum_area = 0.0;						
    // (3) an double has been created
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				
    // (4) the parametric constructor of Ring has been called 
    // then the parametric constructor of Circle has been called
    // then the parametric constructor of Area has been called
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	list[0] = &blue_ring;						
    // (5) make pointer list[0] point to the instance of blue_ring
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	while (index < num_obj) {					// (7) loop 6 times 
		(list[index])->getColor();				
		double area = list[index++]->calcArea();
        // (8) call the calcArea() of the instance where list[index++] points
		sum_area += area;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	
            // (9) prints the value of sum_area to the cout 
    
    index = 0;
    cout << endl;
    while(index < num_obj) {
        cout << list[index] -> calcPerimeter() << endl;
        index++;
    }
    cout << endl;

    index = 0;
    double sumPeri = 0;
    while(index < num_obj) {
        sumPeri = sumPeri + list[index]->calcPerimeter();
        index++;
    }
    cout << endl << "The sum of total perimeter is " << sumPeri << "." << endl;

	return 0;
}
