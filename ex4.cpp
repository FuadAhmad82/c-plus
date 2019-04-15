//  Find Quotient and Remainder  on this website  https://www.programiz.com/cpp-programming/examples/quotient-remainder


#include "stdafx.h"
#include <iostream>



using namespace std; 

int main()
{

	int divisor, dividend, quotient, remainder;

	cout << "Enter dividend: ";
	cin >> dividend;

	cout << "Enter divisor: ";
	cin >> divisor;

	quotient = dividend / divisor;
	remainder = dividend % divisor;

	cout << "Quotient = " << quotient << endl;
	cout << "Remainder = " << remainder;

	return 0;



}

