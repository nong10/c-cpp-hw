#include <iostream>
#include "Vector.h"
using namespace std;

int main(){
    double *p = new double [2];
    p[0] = 1.0;
    p[1] = 2.0;
    Vector a(2,p);
    double *p1 = new double [2];
    p[0] = 2.0;
    p[1] = 3.0;
    Vector b(2,p1);
    b.print();
    a.print();
    cout<<a.norm()<<endl;
    (a.add(b)).print();

}
