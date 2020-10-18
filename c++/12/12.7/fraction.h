// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	//int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
    int gcd(int a, int b);
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	void print();				// prints it to the screen

    friend std::istream& operator>>(std::istream& input, Fraction &f) {
        input >> f.num >> f.den;
        return input;
    }

    friend std::ostream& operator<<(std::ostream& output, Fraction &f) {
        output << f.num << "/" << f.den << std::endl;
        return output;
    }

    friend Fraction operator*(Fraction& f1, Fraction& f2) {
        Fraction f(f1.num * f2.num, f1.den * f2.den);
        return f;
    }

    friend Fraction operator/(Fraction& f1, Fraction& f2) {
        Fraction f(f1.num * f2.den, f1.den * f2.num);
        return f;
    }

    friend Fraction operator+(Fraction& f1, Fraction& f2) {
        int dLcm = f1.lcm(f1.den, f2.den); // denominator lcm
        Fraction f(f1.num * dLcm / f1.den + f2.num * dLcm / f2.den, dLcm);
        return f;
    }

    Fraction operator-(Fraction& f1) {
        int dLcm = lcm(den, f1.den); // denominator lcm
        Fraction f(num * dLcm / den - f1.num * dLcm / f1.den, dLcm);
        return f;
    }

    Fraction operator=(const Fraction& f) {
        this -> num = f.num;
        this -> den = f.den;
        return *this;
    }

    friend int useGcd(Fraction& f, int a, int b);

    friend bool operator>(Fraction& f1, Fraction& f2) {
        return (f1 - f2).num > 0;
    }

    friend bool operator<(Fraction& f1, Fraction& f2) {
        return (f2 - f1).num > 0;
    }
    
};


#endif /* FRACTION_H_ */
