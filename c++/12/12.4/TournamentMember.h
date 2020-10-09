/*
	CH-230-A 
    a12-p4.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/
#include <iostream>

using namespace std;

/*
    static string location;
    string firstName;
    string lastName;
    int birthDate;
    bonus properties:
    int age;
    double height;
*/
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
        TournamentMember(string firstName, string lastName, int birthDate, 
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

/*
    static string location;
    string firstName; string lastName;
    int birthDate; int age; double height;

    int number; string position;
    int goals; bool leftFooted;
*/
class Player : public TournamentMember{

    private:
        int number;
        string position;
        int goals;
        bool leftFooted;

    public:
        // constructors:
        Player();
        Player(string firstName, string lastName, int birthDate, int age,
            double height, int number, string position, int goals, bool leftFooted);
        Player(const Player&);
        ~Player();
        // setters & getters:
        void setNumber(int nNumber) {number = nNumber;}
        void setPosition(string nPosition) {position = nPosition;}
        void setLeftFooted(bool nLeftFooted) {leftFooted = nLeftFooted;}
        int getNumber() const {return number;}
        string getPosition() const {return position;}
        int getGoals() const {return goals;}
        bool getLeftFooted() const {return leftFooted;}
        // others:
        void print() const;
};

/*
    static string location;
    string firstName; string lastName;
    int birthDate; int age; double height;

    int yellowCardCount; int redCardCount;
*/
class Referee : public TournamentMember {

    private:
        int yellowCardCount;
        Player* yellowCardList[40];
        int redCardCount;
        Player* redCardList[40];
    
    public:
        // constructors & destructor:
        Referee();
        Referee(string firstName, string lastName, int birthDate, int age,
            double height);
        Referee(const Referee&);
        ~Referee();
        // getters:
        int getYellowCardCount() const;
        int getRedCardCount() const;
        // utilities:
        bool addToYellowCardList(Player *p);
        bool addToRedCardList(Player *p);  
        void printYellowCardList() const;
        void printRedCardList() const;            
};