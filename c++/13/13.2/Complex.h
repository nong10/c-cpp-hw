/*
	CH-230-A 
    a11-2.[c or cpp or h] 
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
    double getReal() const;
    double getComplex() const;
    // constructors:
    Complex(double newReal, double newComplex);
    Complex();
    // copy constructor:
    Complex(Complex&);
    // print methods:
    void print() const;
    // operation methods:
    void conjugate();
    Complex add(const Complex&) const;
    Complex subtract(const Complex&) const;
    Complex multiply(const Complex&) const;
    // operator override:
    Complex operator+(const Complex& c);
    Complex operator-(const Complex& c);
    Complex operator*(const Complex& c);
    Complex& operator=(const Complex& c);

    friend std::istream& operator>>(std::istream& input, Complex& f) {
        char op;
        int complex;
        input >> f.real >> op >> complex;
        if(op == '+') {
            f.complex = complex;
        }
        else {
            f.complex = -complex;
        }
        return input;
    }

    friend std::ostream& operator<<(std::ostream& output, Complex& f) {
        if(f.complex < 0) {
            output << f.real << " - " << abs(f.complex) << "i" << std::endl;
        }
        else {
            output << f.real << " + " << f.complex << "i" << std::endl;
        }
        return output;
    }

};