// lessonOne.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

//Stops the need to add "std" in front of statements
using namespace std;

int main()
{
	//Variables to contain the numbers for the calculation
	int num1 = 0;
	int num2 = 0;
	int ans = 0;

	//Asks for the first number
    cout << "Please type in the first number: ";
	cin >> num1;
	cout << "\n";

	//Asks for the second number
	cout << "Please type in the second number: ";
	cin >> num2;
	cout << "\n";

	//Does the calculation
	ans = num1 * num2;

	//Outputs the answer
	cout << "The answer is " << ans << ".\n";
	
}