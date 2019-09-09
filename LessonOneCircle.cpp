// lessonOne.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

//Stops the need to add "std" in front of statements
using namespace std;

int main()
{
	//Variables to contain the numbers for the calculation
	int radius = 0;
	float pi = 3.14159;
	int ans = 0;

	//Asks for the radius of the circle
	cout << "Please type in the radius of the circle: ";
	cin >> radius;
	cout << "\n";

	//Does the calculation
	ans = (radius *	radius) * pi;

	//Outputs the answer
	cout << "The area of the circle is " << ans << ".\n";

}