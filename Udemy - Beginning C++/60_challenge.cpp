#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std; 




int main()
{

	cout << "This is Vector Challenge " << endl;

	vector <int> vector1{};
	vector1.push_back(10);
	vector1.push_back(20);


	cout << vector1.at(0) << endl; 
	cout << vector1.at(1) << endl;


	vector <int> vector2{};
	vector2.push_back(100);
	vector2.push_back(200);


	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;

	cout << "This is 2d Vector" << endl;

	vector < vector <int>> vector_2d{};


	vector_2d.push_back(vector1);


	cout << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(0).at(1) << endl;





	vector1.at(0) = 1000; 

	cout << "This is 2d Vector after adding new elemnts " << endl;
	cout << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(0).at(1) << endl;


	cout << vector1.at(0) << endl;


	return 0;
}

