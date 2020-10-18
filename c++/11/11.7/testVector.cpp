#include "Vector.h"
#include <iostream>

using namespace std;

int main() {
    double* varr1 = new double[4];
    varr1[0] = 1;
    varr1[1] = 2;
    varr1[2] = 3;
    varr1[3] = 4;

    Vector v1(4, varr1);
    Vector v2(v1);
    Vector v3;

    v3.setSize(4);    
   

    double* varr2 = new double[4];
    varr2[0] = 2;
    varr2[1] = 3;
    varr2[2] = 4;
    varr2[3] = 5;
    v3.setVectorList(varr2);  
    
    v1.print();
    v2.print();
    v3.print();

    cout << v1.norm() << endl << v1.product(v3) << endl;
    (v1.add(v3)).print();
    (v1.subtract(v3)).print();

    return 0;
}
// nothing to say
