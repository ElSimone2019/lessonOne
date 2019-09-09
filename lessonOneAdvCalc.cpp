// lessonOne.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

//Stops the need to add "std" in front of statements
using namespace std;

int main()
{
	//Variables for numbers, operator and answer
	int num1 = 0;
	int num2 = 0;
	string symbol = "+";
	int answer = 0;

	//Asks for first number
	cout << "What is the first number?: ";
	cin >> num1;
	cout << "\n";

	//Asks for the second number
	cout << "What is the second number?: ";
	cin >> num2;
	cout << "\n";

	//Asks for the operator
	cout << "What is the operator you want to use? (+,-,*,/): ";
	cin >> symbol;

	//If statement to decide calculation to do
	if (symbol == "+") {
		answer = num1 + num2;
	}
	else if (symbol == "-") {
		answer = num1 - num2;
	}
	else if (symbol == "*") {
		answer = num1 * num2;
	}
	else if (symbol == "/") {
		answer = num1 / num2;
	}
	else {
		cout << "Invalid operator";
	}

	//Output of sum and answer
	cout << "The sum of " << num1 << " " << symbol << " " << num2 << " equals " << answer;
}