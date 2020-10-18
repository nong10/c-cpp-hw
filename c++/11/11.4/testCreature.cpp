#include <iostream>
#include "creature.h"

using namespace std;

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << endl << "Creating a Creeper." << endl;
    Creeper m;
    m.explode();

    cout << endl << "Creating a Charged creeper" << endl;
    Charged_Creeper cc;
    cc.explode();

    return 0;
} 
