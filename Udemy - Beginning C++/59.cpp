#include "stdafx.h"
#include <iostream>

#include <vector> 


using namespace std;


int main()
{


	vector <char> vowels{ 'a', 'e', 'i', 'o', 'u' ,'b'};

	cout << vowels[0] << endl;
	cout << vowels[4] << endl;
	cout << "There Are ff:" << vowels.size() << endl;



	vector <int> score_test{ 4, 6, 8, 9 };
	
	cout << score_test[2] << endl;
	cout << "There Are :" << score_test.size() << endl;
	cout << "Please Enter Numbers "; 

	cin >> score_test.at(2);

	cout << "the update is" << score_test[0] << endl;



	cout << "Enter test score add ti vector";
	int score_to_add{0};
	cin >> score_to_add;

	score_test.push_back(score_to_add);

	cout << "Test are now :" << endl; 

	cout << score_test[0] << endl;
	cout << score_test[1] << endl;
	cout << score_test[2] << endl;
	cout << score_test[3] << endl;
	cout << score_test[4] << endl;




	// 2 dimention  vector 

	vector <vector <int>> movie_ratings
	{
		{1,2,3,4},
		{4,5,6,7},
		{2,6,8,7}
	};

	cout << "\nmovie ration for review 1 with array syntax :" << endl;
	cout << movie_ratings[0][0] << endl;
	cout << movie_ratings[0][1] << endl;
	cout << movie_ratings[0][2] << endl;
	cout << movie_ratings[0][3] << endl;

	cout << "\nmovie ration for review 1 with vector syntax :" << endl;

	cout << movie_ratings.at(0).at(0) << endl;
	cout << movie_ratings.at(0).at(1) << endl;
	cout << movie_ratings.at(0).at(2) << endl;
	cout << movie_ratings.at(0).at(3) << endl;



	return 0;
}

