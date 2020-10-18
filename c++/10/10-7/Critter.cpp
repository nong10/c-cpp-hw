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
	thirst = 0;
}
	
Critter::Critter(string newname) {
	height = 5;
	boredom = 0;
	hunger = 0.2;
	name = newname;
	thirst = 0;
}

Critter::Critter(string newname, int newhunger, 
double newheight, int newboredom) {
	name = newname;
	hunger = newhunger / 10.0;
	height = newheight;
	boredom = newboredom;
	thirst = 0;
}

Critter::Critter(string newname, int newhunger, 
double newheight, int newboredom, double newthirst) {
	name = newname;
	hunger = newhunger / 10.0;
	height  = newheight;
	boredom = newboredom;
	thirst = newthirst;
}

Critter::Critter(string newname, int newhunger, int newboredom) {
	height = 10;
	name = newname;
	hunger = newhunger / 10.0;
	boredom = newboredom;
	thirst = 0;
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

void Critter::setThirst(double newthirst) {
	thirst = newthirst;
}
// service function
void Critter::print() {
	cout << endl << "I am " << name << "." <<endl << "My hunger level is " 
	<< hunger << "." << endl <<	"My height is " << height << "." << endl 
	<< "My boredom level is " << boredom << endl << "My Thirst level is "
	<< thirst << endl;
}

// getter:
double Critter::getThirst() {
	return thirst;
}

double Critter::getHunger() {
	return hunger;
}
