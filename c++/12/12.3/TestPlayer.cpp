#include "TournamentMember.h"

#include <iostream>

using namespace std;

string TournamentMember::location;

int main() {
    Player p1;
    p1.print();
    p1.setLocation("Hamburg");

    Player p2("Yvett", "Zhao", 20010625, 19, 160, 5, "short", 0, false);
    p2.print();

    Player p3(p2);
    p3.print();
    
    cout << p3.getFirstName() << p3.getLastName() << p3.getBirthDate() << p3.getAge()
    << p3.getHeight() << p3.getNumber() << p3.getPosition() << p3.getGoals() 
    << p3.getLeftFooted() << p1.getLocation() << endl;

    p3.setAge(18);
    p3.setBirthDate(2002625);
    p3.setFirstName("Yan");
    p3.setHeight(1);
    p3.setLeftFooted(true);
    p3.setNumber(999);
    p3.setPosition("end");
    p3.print();

    return 0;
}
