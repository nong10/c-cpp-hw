#include"Vector.h"

void Vector::print()
{
    for (int i = 0; i < size; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

Vector::Vector() {
    size = 0;
    p = NULL;
}

double Vector::norm() {
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + (p[i]*p[i]);
    }
    return pow(sum,0.5);
}

Vector::Vector(int nsize,double* npointer) {
    size = nsize;
    p = new double [size];
    for (int i = 0; i < size; i++)
    {
        p[i] = npointer[i];
    }
}

Vector::~Vector() {
    cout<<"destructor"<<endl;
}

void Vector::setSize(int n1) {
    size = n1;
}

int Vector::getSize() {
    return size;
}

void Vector::setPointer(double* p1) {
    delete []p;
    p = new double [size];
    for (int i = 0; i < size ; i++)
    {
        p[i] = p1[i];
    }
    
}

double* Vector::getPointer() const {
    double *pq;
    pq = p;
    return pq;
}

Vector Vector::add(const Vector z) const {
    double* p5;
    p5 = new double [size]; 
    double* zp = z.getPointer();
    for(int i = 0; i < size; i++)
    {   cout<<"/"<<zp[i]<<endl;
        p5[i] = p[i] + zp[i];
        cout<<":"<<zp[i]<<endl;
    }
    Vector d(size,p5);
    d.print();
    delete [] p5;
    return d;
}