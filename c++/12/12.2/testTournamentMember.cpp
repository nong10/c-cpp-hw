#include "TournamentMember.h"
#include <iostream>

string TournamentMember::location;

using namespace std;

int main() {

    TournamentMember t1;
    t1.setLocation("Shenyang");
    t1.setFirstName("Hengyi");
    t1.setLastName("Song");
    t1.setBirthDate(20010912);
    t1.setAge(19);
    t1.setHeight(167.3);
    
    t1.print();

    TournamentMember t2(t1);
    t2.print();
    
    return 0;
}
