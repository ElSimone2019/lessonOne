// lessonOne.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

//Stops the need to add "std" in front of statements
using namespace std;

int main()
{
	//Variable to hold the users choice
	string choice = " ";

	//While loop to keep the menu going until they type "exit"
	while (choice != "Exit") {

		//Menu options and input
		cout << "Program Menu\n*Open file\n*Save file\n*Exit program\n";
		cin >> choice;

		//If statement to pick options
		if (choice == "Open file" or choice == "open file") {
			cout << "You have selected to open a file";
		}
		else if (choice == "Save file" or choice == "save file") {
			cout << "You have selected to save a file";
		}
		else if (choice == "Exit program" or choice == "exit program" or choice == "Exit" or choice == "exit") {
			cout << "You have selected to exit";
			return 0;
		}
		else {
			cout << "Option not recognised, please try again";
		}
	}
}