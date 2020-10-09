/*
	CH-230-A 
    a12-p4.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include "TournamentMember.h"

#include <iostream>

using namespace std;

string TournamentMember::location;

int main() {
    Referee r("Harry", "Lee", 20010931, 15, 1234);
    r.setLocation("Bremen");
    Player p1("Yvette", "Zhao", 20000625, 19, 160, 0, "first", 0, false);
    Player p2("Raphaelle", "Han", 20000834, 19, 170, 1, "second", 0, false);
    Player p3("Notrechien", "Song", 20000000, 20, 165, 2, "third", 0, true);

    // test add yellow
    bool yellow = r.addToYellowCardList(&p1);
    cout << yellow << endl;
    r.printYellowCardList();

    r.addToYellowCardList(&p2);
    r.addToYellowCardList(&p3);

    // test add player that already exist in yellowlist
    yellow = r.addToYellowCardList(&p1);
    cout << yellow << endl;
    r.printRedCardList();
    r.printYellowCardList();

    // test add player that already exist in redlist
    bool red = r.addToRedCardList(&p1);
    r.addToYellowCardList(&p2);
    cout << red << endl;
    r.printRedCardList();
    r.printYellowCardList();
    return 0;
}