/*
	CH-230-A 
    a11-p5.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <iostream>
#include "creature.h"

using namespace std;

// Creature
Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

// Wizard:
Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

// Creeper!!!!!!!!
Creeper::Creeper() {
    height = 1.7;
    explodePower = 3;
    distance = 10;
}

void Creeper::setDistance(int newD) {
    distance = newD;
}

int Creeper::getExplodePower() const {
    return explodePower;
}

double Creeper::getHeight() const {
    return height;
}

void Creeper::explode() const {
    if(distance <= 8) {
        cout << "BOOOOOM!" << endl;
    }
    else {
        cout << "Creeper is not in detection range" << endl;
    }
}

// charged creeper!!!!!!!!
Charged_Creeper::Charged_Creeper() {
    explodePower = 6;
    height = 1.7;
    distance = 13;
}

void Charged_Creeper::explode() const {
    if(distance <= 8) {
        cout << "BBOOOOOOOOOOMM!" << endl;
    }
    else {
        cout << "Charged creeper is not in detection range" << endl;
    }
}

void Charged_Creeper::setDistance(int newDistance) {
    distance = newDistance;
}

int Charged_Creeper::getExplodePower() const {
    return explodePower;
}

double Charged_Creeper::getHeight() const {
    return height;
}
