#include <iostream>
#include "creature.h"

using namespace std;

int main()
{ 
    string command("start!");
    // the forever loop:
    while(true) {
        cin >> command;
        
        if(command == "quit") {
            break;
        }
        // if Wizard entered
        if(command == "Wizard") {
            Wizard* w = new Wizard;
            w -> ~Wizard();
        }
        // if Creeper entered
        else if(command == "Creeper") {
            Creeper* c = new Creeper;
            c -> ~Creeper();
        }
        // if Charged_Creeper entered
        else if(command == "Charged_Creeper") {
            Charged_Creeper* cc = new Charged_Creeper;
            cc -> ~Charged_Creeper();
        }
        else {
            cout << "invalid input!" << endl;
        }
    }

    return 0;
} 
