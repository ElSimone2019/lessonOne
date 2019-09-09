// lessonOne.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

//Stops the need to add "std" in front of statements
using namespace std;

int main()
{
	//Variable to hold teacher name
	string teacher;

	//Input for teacher name off user
	cout << "Type a teachers name: ";
	cin >> teacher;

	//If statement to judge the teacher
	if (teacher == "Darren") {
		cout << "Legend";
	}
	else if (teacher == "Dave") {
		cout << "OK";
	}
	else if (teacher == "Jim") {
		cout << "Happy";
	}
	else {
		cout << "I do not recognise this teacher";
	}
}