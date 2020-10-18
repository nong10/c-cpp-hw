#include <iostream>
#include "TournamentMember.h"

TournamentMember::TournamentMember() {
    cout << "Default constructor TournamentMember!" << endl;
    location = "default_location";
    firstName = "default_firstName";
    lastName = "default_lastName";
    birthDate = 20010625;
    age = 19;
    height = 165;
}

TournamentMember::TournamentMember(string firstName, string lastName, 
    int birthDate, int age, double height) 
{
    cout << "Parametric constructor TournamentMember!" << endl;
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> birthDate = birthDate;
    this -> age = age;
    this -> height = height;
}

TournamentMember::TournamentMember(const TournamentMember& t) {
    cout << "Copy constructor TournamentMember!" << endl;
    firstName = t.getFirstName();
    lastName = t.getLastName();
    birthDate = t.getBirthDate();
    age = t.getAge();
    height = t.getHeight();
}

TournamentMember::~TournamentMember() {
    cout << "Destructor TournamentMember!" << endl;
}

void TournamentMember::print() const {
    cout << endl << "Name: " << firstName << " " << lastName << endl 
    << "Birth date: " << birthDate << endl << "Age: " << age << endl 
    << "Height: " << height << endl << "Location: " << location << endl;
}

Player::Player() : TournamentMember() {
    cout << "Default constructor Player!" << endl;
    number = -1;
    position = "unknown_position";
    goals = 0;
    leftFooted = false;
}

Player::Player(string firstName, string lastName, int birthDate, int age,
    double height, int number, string position, int goals, bool leftFooted)
    : TournamentMember(firstName, lastName, birthDate, age, height)
{
    cout << "Parametric constructor Player!" << endl;
    this -> number = number;
    this -> position = position;
    this -> goals = goals;
    this -> leftFooted = leftFooted;
}

Player::Player(const Player &p) : TournamentMember(p.getFirstName(), 
    p.getLastName(), p.getBirthDate(), p.getAge(), p.getHeight()) 
{
    cout << "Copy constructor Player!" << endl;
    number = p.getNumber();
    position = p.getPosition();
    goals = p.getGoals();
    leftFooted = p.getLeftFooted();
}

Player::~Player() {
    cout << "Destructor Player!" << endl;
}

void Player::print() const {
    cout << endl << "Name: " << getFirstName() << " " << getLastName() << endl 
    << "Birth date: " << getBirthDate() << endl << "Age: " << getAge() << endl 
    << "Height: " << getHeight() << endl << "Location: " << getLocation() << endl
    << "Number: " << number << endl << "Postition: " << position << endl
    << "Goals: " << goals << endl;
    leftFooted ? cout << "LeftFooted\n" : cout << "RightFooted\n";
}

Referee::Referee() {
    cout << "Default constructor Referee!" << endl;
    yellowCardCount = 0;
    redCardCount = 0;
}

Referee::Referee (string firstName, string lastName, int birthDate, int age,
    double height) : TournamentMember(firstName, lastName, birthDate, age, height)
{
    cout << "Parametric constructor Referee!" << endl;
    yellowCardCount = 0;
    redCardCount = 0;
}

Referee::Referee(const Referee& r) : TournamentMember(r.getFirstName(),
    r.getLastName(), r.getBirthDate(), r.getAge(), r.getHeight()) 
{
    cout << "Copy constructor Referee!" << endl;
    yellowCardCount = r.getYellowCardCount();
    redCardCount = r.getRedCardCount();
}

Referee::~Referee() {
    cout << "Destructor Referee!" << endl;
}

int Referee::getRedCardCount() const {
    return redCardCount;
}

int Referee::getYellowCardCount() const {
    return yellowCardCount;
}

bool Referee::addToYellowCardList(Player *p) {
    for(int i = 0; i < 40; i++) {
        if(yellowCardList[i] == p) {
            for(int j = i + 1; j <= yellowCardCount; j++) {
                yellowCardList[j - 1] = yellowCardList[j];
            }
            yellowCardList[yellowCardCount] = NULL;
            this -> addToRedCardList(p);
            yellowCardCount--;
            return false;
        }
    }
    yellowCardList[yellowCardCount] = p;
    yellowCardCount++;
    return true;
}

bool Referee::addToRedCardList(Player *p) {
    //cout << "addToRed" << endl;
    for(int i = 0; i < 40; i++) {
        if(redCardList[i] == p) {
            return false;
        }
    }
    redCardList[redCardCount] = p;
    redCardCount++;
    return true;
}

void Referee::printRedCardList() const {
    //cout << "printRed" << endl;
    for(int i = 0; i < redCardCount; i++) {
        cout << redCardList[i] -> getFirstName() << endl;
    }
    cout << endl;
}

void Referee::printYellowCardList() const {
    for(int i = 0; i < yellowCardCount; i++) {
        cout << yellowCardList[i] -> getFirstName() << endl;
    }
    cout << endl;
}
