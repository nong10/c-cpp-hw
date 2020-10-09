/*
    CH-230-A 
    a9-p6.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int randomNum;
    srand(static_cast<unsigned int>(time(0)));
    string pName;
    cout << "Guessing a number range 100-0\nPlease enter your name" << endl;
    cin >> pName;
    cout << "Start guessing!\nYou have total 6 times to guess" << endl;
    cout << "Please enter a number(integer only!):" << endl;
    randomNum = rand() % 101;
    int times = 6;
    int guess;
    while(times > 0) {
        cin >> guess;
        if(guess == randomNum) {
            break;
        }
        if(guess > 100 || guess < 0) {
            cout << "NOOB can't u read??";
        }
        else if(guess > randomNum) {
            cout << "Too high";
        }
        else {
            cout << "Too low";
        }
        times --;
        cout << "; " << times << " times left" << endl;
    }
    if(times > 0) {
        cout << "Congratulation! " + pName << endl;
    }
    else {
        cout << "Go back to your kindergarten! " + pName << endl;
    }
    return 0;
}

/*
    appropriate comment!!! :) :)
*/