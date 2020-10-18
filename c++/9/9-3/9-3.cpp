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
