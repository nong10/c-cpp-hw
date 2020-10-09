/*
	CH-230-A 
    a10-p5.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#ifndef _Critter_
#define _Critter_

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;

public: // business logic methods are public
	// constructors:
	Critter();
	Critter(std::string newname);
	Critter(std::string newname, int newhunger, double newheight, int newboredom);
	Critter(std::string newname, int newhunger, int newboredom);
	// setter methods
	void setName(std::string newname);
	void setHunger(int newhunger);
	void setHeight(double newheight);
	void setBoredom(int newboredom);
	// getter method
	int getHunger();
	// service method
	void print();
};
#endif