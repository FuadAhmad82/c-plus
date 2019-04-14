#include "stdafx.h"
#include <iostream>


int _tmain()
{
	int favorite_number;
	std::cout << "Enter your Favorite Number Between 1 and 100 ";
	std::cin >> favorite_number;
	std::cout << "Amazing that's my favorite number too" << std::endl;
	std::cout << "No really " << favorite_number << " is my favorite number" << std::endl;
	system("pause"); // pause the command line 
	return 0;
}

