// lessonOne.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

//Stops the need to add "std" in front of statements
using namespace std;

int main()
{
	//Variable to hold score
	int score = 0;

	//Input for score off user
	cout << "What did you score?: ";
	cin >> score;

	//If statement to grade the score
	if (score > 100) {
		cout << "Score must be less than 100";
	}
	else if (score > 69) {
		cout << "Excellent";
	}
	else if (score < 70 && score > 49) {
		cout << "A Good Pass";
	}
	else if (score < 50 && score > 39) {
		cout << "A Bare Pass";
	}
	else if (score < 40 && score > 20) {
		cout << "Just Failed";
	}
	else {
		cout << "Very Poor";
	}
}