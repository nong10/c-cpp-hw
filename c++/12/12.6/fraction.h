/*
	CH-230-A 
    a12-p6.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	void print();				// prints it to the screen

    friend std::istream& operator>>(std::istream& input, Fraction &f) {
        std::cin >> f.num >> f.den;
        return input;
    }

    friend std::ostream& operator<<(std::ostream& output, Fraction &f) {
        std::cout << f.num << "/" << f.den << std::endl;
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
    
};


#endif /* FRACTION_H_ */
