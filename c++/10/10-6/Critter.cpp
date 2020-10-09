/*
	CH-230-A 
    a10-p6.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/


#include <iostream>
#include "Critter.h"

using namespace std;

// constructors: 
Critter::Critter() {
	cout << "default constructor" << endl;
	name = "default_critter";
	height = 5;
	boredom = 0;
	hunger = 0.2;
}
	
Critter::Critter(std::string newname) {
	height = 5;
	boredom = 0;
	hunger = 0.2;
	name = newname;
}

Critter::Critter(std::string newname, int newhunger, double newheight, int newboredom) {
	name = newname;
	hunger = newhunger / 10.0;
	height = newheight;
	boredom = newboredom;
}

Critter::Critter(std::string newname, int newhunger, int newboredom) {
	height = 10;
	name = newname;
	hunger = newhunger / 10.0;
	boredom = newboredom;
}

//setters:
void Critter::setHeight(double newheight) {
	height = newheight;
}

void Critter::setName(string newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger / 10.0;
}

// service function
void Critter::print() {
	cout << endl << "I am " << name << "." <<endl << "My hunger level is " << hunger << "." << endl <<
	"My height is " << height << "." << endl << "My boredom level is " << boredom << endl;
}

// getter:
double Critter::getHunger() {
	return hunger;
}
