/*
	CH-230-A 
    a11-p2.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/
#include <string>

class Person {

private:
    std::string name;
    int age;
    double height;
    /*  
        true for male false for female 
        Disclaimer:
        I'm not intended to assign 
        either male to "true" nor female to "false", I do it randomly
    */
    bool sex; 

public:
    // constructor:
    Person();
    Person(int newAge, double newHeight); 
    Person(std::string newName, int newAge, double newHeight, bool newSex); 
    Person(Person&);
    // setters:
    void setName(std::string newName);
    void setAge(int newAge);
    void setHeight(double newHeight);
    void setSex(bool newSex);
    // getters:
    std::string getName();
    int getAge();
    double getHeight();
    bool getSex();
    // print:
    void printPerson();
};