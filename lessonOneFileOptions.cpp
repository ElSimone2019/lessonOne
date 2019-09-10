// lessonOne.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

//Stops the need to add "std" in front of statements
using namespace std;

int main()
{
	//Variable to hold the users choice
	string choice;

	//While loop to keep the menu going until they type "exit"
	while (choice != "Exit") {

		//Menu options and input
		cout << "Program Menu\n*Open\n*Save\n*Exit\n";
		cin >> choice;

		//If statement to pick options
		if (choice == "Open") {
			cout << "You have selected to open a file\n";
		}
		else if (choice == "Save") {
			cout << "You have selected to save a file\n";
		}
		else if (choice == "Exit") {
			cout << "You have selected to exit\n";
			return 0;
		}
		else {
			cout << "Option not recognised, please try again\n";
		}
	}
}