/*
	CH-230-A 
    a12-p2.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

TournamentMember::TournamentMember() {
    cout << "Default constructor!" << endl;
    location = "default_location";
}

TournamentMember::TournamentMember(char* firstName, char* lastName, 
    int birthDate, int age, double height) 
{
    cout << "Parametric constructor!" << endl;
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> birthDate = birthDate;
    this -> age = age;
    this -> height = height;
}

TournamentMember::TournamentMember(const TournamentMember& t) {
    cout << "Copy constructor!" << endl;
    firstName = t.getFirstName();
    lastName = t.getLastName();
    birthDate = t.getBirthDate();
    age = t.getAge();
    height = t.getHeight();
}

TournamentMember::~TournamentMember() {
    cout << "Destructor!" << endl;
}

void TournamentMember::print() const {
    cout << endl << "Name: " << firstName << " " << lastName << endl 
    << "Birth date: " << birthDate << endl << "Age: " << age << endl 
    << "Height: " << height << endl << "Location: " << location << endl;
}