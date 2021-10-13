// MathTutor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std; 

int main()
{
	cout << "\n------------------------------------------\n";
	cout << "     Math Tutor Program\n";
	cout << "\n------------------------------------------\n";




	//Declaration
	int number, firstRandNumber, secondRandNumber;
	int answer1 = firstRandNumber + secondRandNumber;
	int answer2 = firstRandNumber - secondRandNumber;

	srand(time(NULL));

	firstRandNumber = rand() % 500 + 1;
	secondRandNumber = rand() % 500 + 1;


	//Outputs
	cout << "Would you like to Add (type 1) or Subtract (type 2) = ";
	cin >> number;

	cout << "Answer the following question" << endl;
	if (number = 1)
	{


		cout << firstRandNumber << " + " << secondRandNumber "= ";


	}


	

		cout << secondRandNumber << endl;


		cout << "Please answer the following problem " << endl;



		cout << "The answer was actually = " << endl;

		system("pause");

		return 0;
	}


	
