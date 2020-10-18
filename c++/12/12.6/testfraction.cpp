#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	Fraction a;
    cin >> a;
	Fraction b;
    cin >> b;
	Fraction c(5);
    Fraction d(7, 4);

    // test "*" override
    c = a * b;

    // test "/" override
    Fraction e = a / d;

	a.print(); 
	cout << b; 
	c.print(); 
    cout << d;
    cout << e;
}
