/*
	CH-230-A 
    a12-p5.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <iostream> 
#include <cstdlib> 
#include <ctime>
using namespace std;
int main() { 
    int die;
    int count = 0; 
    int randomNumber; 
    string colours[] = {"RED", "BLACK", "VIOLET", "BLUE"};
    // init random number generator 
    srand(static_cast<unsigned int>(time(0))); 
    while (count < 15) { 
        randomNumber = rand(); 
        die = (randomNumber % 6) + 1; 
        if(die < 5) {
            cout << count + 1 << ": " << colours[die - 1] << endl;
            count++;
        }
    } 
    return 0; 
}
