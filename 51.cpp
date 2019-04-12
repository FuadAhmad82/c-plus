#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	cout << "Hello , Welcome to Franks Carper Cleaning Service" << endl;;
	cout << "\nHow many small  rooms would like cleaned? " << endl;

	int number_of_srooms;
	cin >> number_of_srooms;

	cout << "How many large  rooms would like cleaned? " << endl;

	int number_of_lrooms;
	cin >> number_of_lrooms;


	const double price_per_sroom{ 25.0 };
	const double price_per_lroom{ 35.0 };



	const double sales_tax{ 0.06 };



	const int estimate_expiry{ 30 };  // days

	cout << "Estimate for carpet cleanig service" << endl;
	cout << "Number of small rooms :" << number_of_srooms << endl;
	cout << "Number of large rooms :" << number_of_lrooms << endl;

	cout << "Price per small room: $" << price_per_sroom << endl;
	cout << "Price per large room: $" << price_per_lroom << endl;
	
	
	
	cout << "Cost: $" << (price_per_sroom * number_of_srooms) + (price_per_lroom * number_of_lrooms) << endl;

	cout << "Tax: $" << (price_per_sroom * number_of_srooms* sales_tax) + (price_per_lroom * number_of_lrooms * sales_tax) << endl;
	cout << "====================" << endl;
	cout << "Totsal estimate : $" << (number_of_srooms * price_per_sroom) + (number_of_lrooms * price_per_lroom) + (price_per_sroom * number_of_srooms* sales_tax) + (price_per_lroom * number_of_lrooms * sales_tax) << endl;
	cout << "This estimate is valid for " << estimate_expiry << " days" << endl;




	return 0;
}

