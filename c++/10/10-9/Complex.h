/*
	CH-230-A 
    a10-p9.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

class Complex{
    
    private:
    double real;
    double complex;

    public:
    // setters:
    void setReal(double);
    void setComplex(double);
    // getters:
    double getReal();
    double getComplex();
    // constructors:
    Complex(double newReal, double newComplex);
    Complex();
    // copy constructor:
    Complex(Complex&);
    // print methods:
    void print();
    // operation methods:
    void conjugate();
    Complex add(Complex&);
    Complex subtract(Complex&);
    Complex multiply(Complex&);
    
};