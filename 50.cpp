#include "stdafx.h"
#include <iostream>



using namespace std;

int main()
{		
	

		cout << "Hello , Welcome to Franks Carper Cleaning Service" << endl;;
		cout << "\nHow many rooms would like cleaned? " << endl;
		
		
		int number_of_rooms;
		cin >> number_of_rooms;

		const double price_per_room{ 30.0 };
		const double sales_tax{ 0.06 };
		const int estimate_expiry{ 30 };  // days

		cout << "Estimate for carpet service" <<  endl;
		cout << "Number of rooms :" << number_of_rooms << endl;
		cout << "Price per room: $" << price_per_room << endl;
		cout << "Cost: $" << price_per_room * number_of_rooms << endl;
		cout << "Tax: $" << price_per_room * number_of_rooms* sales_tax << endl;
		cout << "====================" << endl;
		cout << "Totsal estimate : $" << (number_of_rooms * price_per_room) + (price_per_room * number_of_rooms * sales_tax) << endl;
		cout << "This estimate is valid for " << estimate_expiry << " days" << endl;



	return 0;
}

