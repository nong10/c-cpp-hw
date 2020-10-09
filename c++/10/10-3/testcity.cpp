/*
	CH-230-A 
    a10-p3.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

void setCity(City &c);

int main() {
    // three cities to be set
    City c1, c2, c3;
    // set three cities by stdin
    setCity(c1);
    setCity(c2);
    setCity(c3);
    // print the info of three cities
    c1.printCity();
    c2.printCity();
    c3.printCity();
    return 0;
}

/*
    The interface to set a city from stdin
*/
void setCity(City &c) {
    // get name
    string temp;
    cout << "Name: ";
    cin >> temp;
    c.setName(temp);
    // get population
    int po;
    cout << "Population (Integer): ";
    cin >> po;
    c.setPopulation(po);
    // get mayor
    cout << "Mayor: ";
    cin >> temp;
    c.setMayor(temp);
    // get area
    double area;
    cout << "Area in square km (Double): ";
    cin >> area;
    c.setArea(area);
}