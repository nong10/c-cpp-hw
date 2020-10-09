/*
	CH-230-A 
    a12-p7.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    /*
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
    cout << e 
    */
    cout << "----------------------" << endl;

    Fraction f1;              // test "+"
    cin >> f1;
    Fraction f2;
    cin >> f2;
    Fraction f3 = f1 + f2;          // test "="
    cout << f3;

    f3 = f2 - f1;                   // test "-"
    cout << f3;



    cout << (f1 > f2) << endl;              // test ">"
    cout << (f1 < f2) << endl;              // test "<"
}
