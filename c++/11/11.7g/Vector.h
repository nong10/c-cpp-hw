#ifndef _vector_
#define _vector_

#include <iostream>
#include <math.h>
using namespace std;

class Vector
{

private:
    int size;
    double *p;

public:
    Vector(int,double*);
    Vector();
    void setSize(int);
    void setPointer(double*);
    int getSize();
    double* getPointer() const;
    void print();
    double norm();
    Vector add(const Vector) const;
    Vector diff(const Vector) const;
    Vector pdt(const Vector) const;
    ~Vector();
};

//Vector add(const Vector) const{

//}

















#endif