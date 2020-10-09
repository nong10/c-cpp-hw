/*
	CH-230-A 
    a10-p9.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

using namespace std;

// constructors:
Complex::Complex() {
    real = 0;
    complex = 0;
}

Complex::Complex(double newReal, double newComplex) {
    real = newReal;
    complex = newComplex;
}

// copy constructor:
Complex::Complex(Complex &c) {
    real = c.getReal();
    complex = c.getComplex();
}

// setters:
void Complex::setComplex(double newComplex) {
    complex = newComplex;
}

void Complex::setReal(double newReal) {
    real = newReal;
}

// getters:
double Complex::getComplex() {
    return complex;
}

double Complex::getReal() {
    return real;
}

// serving methods:
void Complex::print() {
    if(complex < 0) {
        cout << real << " - " << abs(complex) << "i" << endl;
    }
    else {
        cout << real << " + " << complex << "i" << endl;
    }
}

// operation methods:
void Complex::conjugate() {
    if(complex < 0) {
        complex = abs(complex);
    }
    else {
        complex = -complex;
    }
}

Complex Complex::add(Complex& c) {
    Complex r(real + c.real, complex + c.complex);
    return r;
}

Complex Complex::subtract(Complex& c) {
    Complex r(real - c.real, complex - c.complex);
    return r;
}

Complex Complex::multiply(Complex& c) {
    Complex r;
    r.setReal(real * c.real - complex * c.complex);
    r.setComplex(real * c.complex + complex * c.real);
    return r;
}