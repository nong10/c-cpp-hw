/*
	CH-230-A 
    a13-2.[c or cpp or h] 
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
double Complex::getComplex() const {
    return complex;
}

double Complex::getReal() const {
    return real;
}

// serving methods:
void Complex::print() const {
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

Complex Complex::add(const Complex& c) const {
    Complex r(real + c.real, complex + c.complex);
    return r;
}

Complex Complex::subtract(const Complex& c) const {
    Complex r(real - c.real, complex - c.complex);
    return r;
}

Complex Complex::multiply(const Complex& c) const {
    Complex r;
    r.setReal(real * c.real - complex * c.complex);
    r.setComplex(real * c.complex + complex * c.real);
    return r;
}

Complex Complex::operator+(const Complex& c) {
    Complex r(real + c.real, complex + c.complex);
    return r;
}
    
Complex Complex::operator-(const Complex& c) {
    Complex r(real - c.real, complex - c.complex);
    return r;
}

Complex Complex::operator*(const Complex& c) {
    Complex r;
    r.setReal(real * c.real - complex * c.complex);
    r.setComplex(real * c.complex + complex * c.real);
    return r;
}

Complex& Complex::operator=(const Complex& c) {
   real = c.getReal();
   complex = c.getComplex();
   return *this;
}