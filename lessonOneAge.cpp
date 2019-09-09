// lessonOne.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

//Stops the need to add "std" in front of statements
using namespace std;

int main()
{
	//Variable to hold age
	int age = 0;

	//Input to ask the user for their age
	cout << "What is your age?: ";
	cin >> age;

	//If statement to say how old they are
	if (age < 0) {
		cout << "This person is not born yet";
	}
	else if (age < 18) {
		cout << "This person is a child";
	}
	else {
		cout << "This person is an adult";
	}
}