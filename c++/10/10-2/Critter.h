/*
	CH-230-A 
    a10-p2.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/


#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	double weight;

public: // business logic methods are public
	// setter methods
	void setName(std::string newname);
	void setHunger(int newhunger);
	void setHeight(double newheight);
	void setBoredom(int newboredom);
	void setWeight(double newweight);
	// getter method
	int getHunger();
	// service method
	void print();
};
