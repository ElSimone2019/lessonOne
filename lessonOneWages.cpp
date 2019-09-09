// lessonOne.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

//Stops the need to add "std" in front of statements
using namespace std;

int main()
{
	//Variables to hold hourly rate and no of hours
	double hourlyRate = 0;
	int noOfHours = 0;

	//Gets inputs for hourly rate and no of hours
	cout << "Please enter your hourly rate: £";
	cin >> hourlyRate;
	cout << "\n";
	cout << "Please enter the number of hours you worked this week: ";
	cin >> noOfHours;
	cout << "\n";

	//If statement to check how much they earned
	if (hourlyRate * noOfHours < 100) {
		cout << "You earned " << hourlyRate * noOfHours << " pounds. You did not earn much";
	}
	else if (hourlyRate * noOfHours > 99 && hourlyRate * noOfHours < 500) {
		cout << "You earned " << hourlyRate * noOfHours << " pounds. This is a decent wage";
	}
	else if (hourlyRate * noOfHours > 500) {
		cout << "You earned " << hourlyRate * noOfHours << " pounds. Wow, dinners on you!";
	}
}