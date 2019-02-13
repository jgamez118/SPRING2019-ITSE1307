// MilesToKilometers(Homework).cpp : This file contains the 'main' function. Program execution begins and ends there.


//This program converts miles to kilometers

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// This piece of code is the declaration of the variables
	int intMiles = 0;
	double dblKilometers = 0;
	double dblDistance = 1.609; //There are 1.609 kilometers to the mile.

	// Here we prompt the user to insert either a whole number to convert
	cout << "Miles to Kilometers Converter" << endl;
	cout << "Enter the number of miles: " << endl;
	cin >> intMiles;

	// Here is the equation used to convert miles into kilometers
	dblKilometers = intMiles * dblDistance;
	cout << "The total distance in kilometers is: " << dblKilometers << endl;

	return 0;
}