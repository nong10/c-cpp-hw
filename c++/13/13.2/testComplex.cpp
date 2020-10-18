#include <iostream>
#include "Complex.h"
#include <fstream>

using namespace std;

void setComplex(Complex &c);

int main()
{
    /*
    Complex c1, c2, c3;
    cout << "first complex number" << endl;
    setComplex(c1);
    cout << "second complex number" << endl;
    setComplex(c2);
    // conjugate
    c1.conjugate();
    cout << endl << "conjugate of first complex number: ";
    c1.print();
    // add of two complex
    c3 = c1 + c2;
    cout << "add: ";
    c3.print();
    // difference of two complex
    c3 = c1 - c2;
    cout << "subtract: ";
    c3.print();
    // mutiplication of two complex
    c3 = c1 * c2;
    cout << "multiply: ";
    c3.print();
    // destruct
    c1.~Complex();
    c2.~Complex();
    c3.~Complex();
    */
    ifstream f1("in1.txt");
    ifstream f2("in2.txt");

    Complex c1;
    Complex c2;
    f1 >> c1;
    f2 >> c2;

    cout << c1;
    cout << c2;

    Complex c3;

    ofstream f3("output.txt");
    c3 = c1 + c2;
    f3 << c3;
    cout << c3;

    c3 = c1 - c2;
    f3 << c3;
    cout << c3;

    c3 = c1 * c2;
    f3 << c3;
    cout << c3;
    
    return 0;
}

// get input
void setComplex(Complex &c) {
    cout << "real part: ";
    double real, complex;
    cin >> real;
    c.setReal(real);
    cout << "complex part: ";
    cin >> complex;
    c.setComplex(complex);
}
