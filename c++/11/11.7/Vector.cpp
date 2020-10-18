#include "Vector.h"
#include <cmath>

#include <iostream>

using namespace std;


Vector::Vector() {
    size = 0;
    varr = NULL;
}

Vector::Vector(int nSize, double* nVarr) {
    size = nSize;
    varr = new double[size];
    for(int i = 0; i < size; i ++) {
        varr[i] = nVarr[i];
    }
}

Vector::Vector(const Vector &v) {
    size = v.getSize();
    varr = new double[size];
    // get varr of v; sVarr stands for source varr
    double* sVarr = v.getVectorList(); 
    for(int i = 0; i < size; i ++) {
        varr[i] = sVarr[i];
    }
}

Vector::~Vector() {
    delete varr;
}

// setters:
void Vector::setSize(int nSize) {
    size = nSize;
}

void Vector::setVectorList(double* nVarr) {
    delete [] varr;
    varr = new double[size];
    for(int i = 0; i < size; i ++) {
        varr[i] = nVarr[i];
    }
}

// getters:
int Vector::getSize() const {
    return size;
}

double* Vector::getVectorList() const {
    return varr;
}

// others:
double Vector::norm() const {
    double sumSqr = 0;  // the sum of the square of all components
    for(int i = 0; i < size; i++) {
        sumSqr = sumSqr + varr[i] * varr[i];
    }
    return pow(sumSqr, 0.5);
}

// under condition that this Vector and parameter Vector have same dimensions
Vector Vector::add(const Vector v) const {    
    double* nVarr = new double[size];
    double* vVarr = v.getVectorList();
    for(int i = 0; i < size; i++) {
        nVarr[i] = varr[i] + vVarr[i];
    }
    Vector r(size, nVarr);
    delete [] nVarr;
    return r;
}

// under condition that this Vector and parameter Vector have same dimensions
Vector Vector::subtract(const Vector v) const {    
    double* nVarr = new double[size];
    double* vVarr = v.getVectorList();
    for(int i = 0; i < size; i++) {
        nVarr[i] = varr[i] - vVarr[i];
    }
    Vector r(size, nVarr);
    delete [] nVarr;
    return r;
}

// under condition that this Vector and parameter Vector have same dimensions
double Vector::product(const Vector v) const {
    double sumProduct;
    double* vVarr = v.getVectorList();
    for(int i = 0; i < size; i++) {
        sumProduct = sumProduct + vVarr[i] * varr[i];
    }
    return sumProduct;
}

void Vector::print() const {
    for(int i = 0; i < size; i++) {
        cout << varr[i] << " ";
    }
    cout << endl;
}
