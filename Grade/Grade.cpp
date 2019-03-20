// Grade.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
/*Jonathan Gamez
ITSE 1307-002
*/

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Declare intGrade for whole number grade, and dblGrade for the decimal grade
	int intGrade = 0;
	double dblGrade = 0;

	// Ask the user for their whole number grade
	cout << "What is your number grade?" << endl;
	cin >> intGrade;

	// Create an If/else statement to determine the letter grade
	cout << "If: ";
	if (intGrade >= 90)
		cout << "The grade is A." << endl;
	else if (intGrade >= 80)
		cout << "The grade is B." << endl;
	else if (intGrade >= 70)
		cout << "The grade is C." << endl;
	else if (intGrade >= 60)
		cout << "The grade is D." << endl;
	else
		cout << "The grade is F." << endl;

	// Create a switch statement to find out the letter grade
	cout << "Switch: ";
	switch (intGrade / 10) {
	case 9: case 10:
		cout << "A" << endl;
		break;
	case 8:
		cout << "B" << endl;
		break;
	case 7:
		cout << "C" << endl;
		break;
	case 6:
		cout << "D" << endl;
		break;
	default: 
		cout << "F" << endl;
	}

	// Ask the user to now enter their decimal grade
	cout << "What is your decimal grade?" << endl;
	cin >> dblGrade;

	// If/else statement to round the grade to the nearest 10 and to display their new numeric and letter grade
	if (dblGrade >= 94.5)
		cout << "Your rounded number grade is: 100" << endl
		<< "Perfect Score!" << endl;
	else if (dblGrade >= 84.5)
		cout << "Your rounded number grade is: 90" << endl
		<< "You now have a: A" << endl;
	else if (dblGrade >= 74.5)
		cout << "Your rounded number grade is: 80" << endl
		<< "You now have a: B" << endl;
	else if (dblGrade >= 64.5)
		cout << "Your rounded number grade is: 70" << endl
		<< "You now have a: C" << endl;
	else if (dblGrade >= 54.5)
		cout << "Your rounded number grade is: 60" << endl
		<< "You now have a: D" << endl;
	else
		cout << "You got an:F" << endl
		<< "You better start studying!" << endl;
}
