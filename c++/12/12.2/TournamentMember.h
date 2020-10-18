#include <iostream>

using namespace std;

class TournamentMember {
    
    private:
        static string location;
        string firstName;
        string lastName;
        int birthDate;
        // bonus properties:
        int age;
        double height;

    public:
        // constructors:
        TournamentMember();
        TournamentMember(char* firstName, char* lastName, int birthDate, 
            int age, double height);
        TournamentMember(const TournamentMember&);
        ~TournamentMember();
        // setters:
        void setFirstName(string firstName) {
            if(firstName.size() > 35) {cout << "invalid\n";} 
            else {this -> firstName = firstName;}
        }
        void setLastName(string lastName) {
            if(lastName.size() > 35) {cout << "invalid\n";} 
            else {this -> lastName = lastName;}
        }
        void setBirthDate(int birthDate) {this -> birthDate = birthDate;}
        void setAge(int age) {this -> age = age;}
        void setHeight(double height) {this -> height = height;}
        
        static void setLocation(string newLocation) {location = newLocation;}

        // getters:
        string getFirstName() const {return firstName;}
        string getLastName() const {return lastName;}
        int getBirthDate() const {return birthDate;}
        int getAge() const {return age;}
        double getHeight() const {return height;}
        
        static string getLocation() {return location;}

        // others:
        void print() const;

};
