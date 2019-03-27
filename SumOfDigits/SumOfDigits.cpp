// SumOfDigits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Jonathan Gamez
// ITSE 1307
// SumOfDigits

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int intInputNumber = 0;
	int intSum = 0;
	int intIndividualNumber = 0;

		cout << "Enter a number that you want to be broken down into individual digits: " << endl; // asking user to input a whole number
		cin >> intInputNumber;

		while (intInputNumber != 0) // this loop is if the number is not 0 then this loop will add up the individual digits of the number entered 
		{
		intSum = intSum + (intInputNumber % 10);
		intInputNumber = intInputNumber / 10;
		}
	

	cout << "The sum of the individual numbers is: " << intSum << endl; // output the sum of the digits

	return 0;
	}