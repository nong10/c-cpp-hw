#include <string>
#include "Person.h"
#include <iostream>

using namespace std;

//constructor
Person::Person() {}

Person::Person(int newAge, double newHeight) {
    age = newAge;
    height = newHeight;
}
// setters:
void Person::setName(string newName) {
    name = newName;
}

void Person::setAge(int newAge) {
    age = newAge;
}

void Person::setHeight(double newHeight) {
    height = newHeight;
}

void Person::setSex(bool newSex) {
    sex = newSex;
}

// getters:
string Person::getName() {
    return name;
}

int Person::getAge() {
    return age;
}

double Person::getHeight() {
    return height;
}

bool Person::getSex() {
    return sex;
}

void Person::printPerson() {
    cout << "Name: " << name << endl;
    cout << "Sex: ";
    if(sex) {
        cout << "male" << endl;
    }
    else {
        cout << "female" << endl;
    }
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
}
