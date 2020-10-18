#include <iostream>
#include "Complex.h"

using namespace std;

void setComplex(Complex &c);

int main()
{
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
    c3 = c1.add(c2);
    cout << "add: ";
    c3.print();
    // difference of two complex
    c3 = c1.subtract(c2);
    cout << "subtract: ";
    c3.print();
    // mutiplication of two complex
    c3 = c1.multiply(c2);
    cout << "multiply: ";
    c3.print();
    // destruct
    c1.~Complex();
    c2.~Complex();
    c3.~Complex();
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
