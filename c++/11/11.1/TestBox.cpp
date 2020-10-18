#include <iostream>
#include "Box.h"

using namespace std;

void setBox(Box &b);
double calcVolum(Box b);

int main() {
    int n;
    cin >> n;
    Box *p = new Box[2*n];
    // get input from stdin
    for(int i = 0; i < n; i++) {
        setBox(p[i]);
    }
    // copy 
    int j = 0;
    for(int i = n - 1; i < 2 * n; i++) {
        Box temp(p[j]);
        p[i] = temp;
        temp.~Box();
    }
    // print all boxes
    for(int i = 0; i < 2 * n; i++) {
        cout << calcVolum(p[i]) << endl;
    }
    delete []p;
    return 0;
}

double calcVolum(Box b) {
    double x = b.getHeight();
    double y = b.getWidth();
    double z = b.getDepth();
    return x * y * z;
}

// set each box
void setBox(Box &b) {
    double x;
    cout << "height: ";
    cin >> x;
    b.setHeight(x);
    cout << "width: ";
    cin >> x;
    b.setWidth(x);
    cout << "Depth: ";
    cin >> x;
    b.setDepth(x);
}
