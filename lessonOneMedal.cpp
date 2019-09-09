// lessonOne.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

//Stops the need to add "std" in front of statements
using namespace std;

int main()
{
	//Variable to hold race position
	int position = 0;

	//User input for position
	cout << "What was your position in the race?: ";
	cin >> position;

	//If statement to find medal
	if (position == 1) {
		cout << "You won Gold";
	}
	else if (position == 2) {
		cout << "You won Silver";
	}
	else if (position == 3) {
		cout << "You won Bronze";
	}
	else {
		cout << "You did not win a medal";
	}
}