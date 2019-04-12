#include "stdafx.h"
#include <iostream>
#include <climits>


using namespace std;

int main()
{

	cout << "The size of int is : " << sizeof(long) << "Bytes" << endl;
	cout << "The size of int is : " << sizeof(LONG_MAX) << "Bytes" << endl;


	int age{21};
	cout << "The size of int is : " << sizeof(age) << "Bytes" << endl;



	return 0;
}

