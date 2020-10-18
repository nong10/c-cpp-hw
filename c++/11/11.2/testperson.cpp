#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

void setPerson(Person &p);

int main() {
    Person p1, p2, p3;
    setPerson(p1);
    setPerson(p2);
    setPerson(p3);
    cout << endl;
    p1.printPerson();
    cout << endl;
    p2.printPerson();
    cout << endl;
    p3.printPerson();
    Person p4(p3);
    Person p5("Yolanda", 19, 165, false);
    return 0;
}

/*
    set person from stdin
*/
void setPerson(Person &p) {
    // set name
    string name;
    cout << "Name: ";
    cin >> name;
    p.setName(name);
    // set age
    int age;
    cout << "Age: ";
    cin >> age;
    p.setAge(age);
    // set height
    double height;
    cout << "Height: ";
    cin >> height;
    p.setHeight(height);
    // set age
    char sex;
    bool invalid = true;
    while(invalid) {
        cout << "Sex[m/f]: ";
        cin >> sex;
        if(sex == 'm' || sex == 'M') {
            p.setSex(true);
            invalid = false;
        }
        else if(sex == 'f' || sex == 'F') {
            p.setSex(false);
            invalid = false;
        }
        else {
            cout << "Invalid input!" << endl;
        }
    }
}
