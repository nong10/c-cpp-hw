/*
	CH-230-A 
    a10-p2.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/


#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setWeight(double newweight) {
	weight = newweight;
}

void Critter::setHeight(double newheight) {
	height = newheight;
}

void Critter::setName(string newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	cout << "I am " << name << "." <<endl << "My hunger level is " << hunger << "." << endl <<
	"My height is " << height << "." << endl << "My weight is " << weight << "." << endl;
}

int Critter::getHunger() {
	return hunger;
}
