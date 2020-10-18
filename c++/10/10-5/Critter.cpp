#include <iostream>
#include "Critter.h"

using namespace std;

// constructors: 
Critter::Critter() {
	cout << "default constructor" << endl;
	name = "default_critter";
	height = 5;
	boredom = 0;
	hunger = 0;
}
	
Critter::Critter(std::string newname) {
	height = 5;
	boredom = 0;
	hunger = 0;
	name = newname;
}

Critter::Critter(std::string newname, int newhunger, double newheight, int newboredom) {
	name = newname;
	hunger = newhunger;
	height = newheight;
	boredom = newboredom;
}

Critter::Critter(std::string newname, int newhunger, int newboredom) {
	height = 10;
	name = newname;
	hunger = newhunger;
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
	hunger = newhunger;
}

// service function
void Critter::print() {
	cout << endl << "I am " << name << "." <<endl << "My hunger level is " << hunger << "." << endl <<
	"My height is " << height << "." << endl << "My boredom level is " << boredom << endl;
}

// getter:
int Critter::getHunger() {
	return hunger;
}
