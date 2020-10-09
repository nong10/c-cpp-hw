/*
	CH-230-A 
    a10-p6.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	// instantce Critters
	Critter c1;
	Critter c2("creeper");
	Critter c3("underman", 2, 2.9, -10);
	Critter c4("zombiepigman", 2, -1000);
	Critter c5("guardian", 2, 0.85, -500, 5);
	// modify hunger
	c1.setHunger(2);
	c2.setHunger(2);
	c2.setHeight(1.7);
	// print
	c1.print();
	c2.print();
	c3.print();
	c4.print();
	c5.print();
    return 0;
}
