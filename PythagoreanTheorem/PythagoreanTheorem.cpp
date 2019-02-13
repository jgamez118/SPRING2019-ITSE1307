// PythagoreanTheorem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//This program runs the Pythagorean Theorem 

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Here we initialize the variables
	int intSideA = 0;
	int intSideB = 0;
	double dblSideC = 0;

	// Here we ask the user to enter a number for sides A and B
	cout << "Pythagorean Theorem" << endl;
	cout << "Enter a number for Side A: " << endl;
	cin >> intSideA;
	cout << "Enter a number for Side B: " << endl;
	cin >> intSideB;
	
	// The equation for Pythagorean Theorem
	dblSideC = sqrt((intSideA * intSideA) + (intSideB * intSideB));

	// Output the length of Side C
	cout << "Side C has a length of: " << dblSideC << endl;

	return 0;
}