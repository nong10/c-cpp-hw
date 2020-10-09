/*
	CH-230-A 
    a10-p3.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include "City.h"
#include <iostream>
#include <string>

using namespace std;

// getters:
void City::setName(string newName) {
    name = newName;
}

void City::setMayor(string newMayor) {
    mayor = newMayor;
}

void City::setPopulation(int newPopulation) {
    population = newPopulation;
}

void City::setArea(double newArea) {
    area = newArea;
}

// setters:
string City::getName() {
    return name;
}

string City::getMayor() {
    return mayor;
}

int City::getPopulation() {
    return population;
}

double City::getArea() {
    return area;
}

/*
    print the information of the city
*/
void City::printCity() {
    cout << endl << "Name: " + name << endl
    << "Population: " << population << endl
    << "Mayor: " + mayor << endl
    << "Area: " << area << " square km(s)" << endl;
}