/*
	CH-230-A 
    a10-p3.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <string>

class City {

private:
    std::string name;
    std::string mayor;
    int population;
    double area;

public:
    void setName(std::string newName);
    void setMayor(std::string newMayor);
    void setPopulation(int newPopulation);
    void setArea(double newArea);
    std::string getName();
    std::string getMayor();
    int getPopulation();
    double getArea();
    void printCity();
} ;

// get nothing to comment