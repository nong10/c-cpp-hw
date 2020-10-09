/*
	CH-230-A 
    a12-p7.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

    int c;
    if(a > b) {
        c = a;
        a = b;
        b = c;
    }

    for(int i = a; i > 1; i--) {
        if(a % i == 0) {
            if(b % i == 0) {return i;}
        }
    }
	
	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
}

int useGcd(Fraction& f, int a, int b) {
    return f.gcd(a, b);
}