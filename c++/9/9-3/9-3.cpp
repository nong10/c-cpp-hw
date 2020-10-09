/*
    CH-230-A 
    a9-p1.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <iostream>
using namespace std;

double absDIY(double x) {
    return x > 0 ? x : -x;
}

int main() {
    double y = -10;
    cout << absDIY(y) << endl;
    return 0;
}

/*
    appropriate comment :)
*/