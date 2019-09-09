// lessonOne.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

//Stops the need to add "std" in front of statements
using namespace std;

int main()
{
	//Variables to hold information about the user
	string name;
	string colour;
	string age;

	//User inputs
	cout << "What is your name?: ";
	cin >> name;
	cout << "What is your favourite colour?: ";
	cin >> colour;
	cout << "What is your age?: ";
	cin >> age;

	//Output the users details
	cout << "I know your name is " << name << ", your favourite colour is " << colour << " and you are " << age << " years old."
}