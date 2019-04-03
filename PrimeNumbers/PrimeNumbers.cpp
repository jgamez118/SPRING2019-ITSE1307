// PrimeNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Jonathan Gamez
// Itse 1307


#include "pch.h"
#include <iostream>
using namespace std;

//creating a function for finding prime numbers
bool isPrime(int intValue) {
	int intPrimeDivisionCount = 0;

	if (intValue == 0) {
		return false;
		cout << "Not Prime";
	}
	else {
		for (int intPrimeCheck = 2;
			intPrimeCheck < intValue;
			intPrimeCheck++) {

			if (intValue % intPrimeCheck == 0) {
				intPrimeDivisionCount++;
			}
		}
	}

	if (intPrimeDivisionCount >= 1) {
		return false;
		cout << "Not a prime!" << endl;
	}

	return true;
}

int main()
{
	int intNumber = 0;

	//Setting the range for the prime numbers the user wants to find
	for (int intRange = 1; intRange <= 10000; intRange++) {
		intNumber = intRange;

		if (isPrime(intNumber)) {
			cout << ", " << intNumber;
		}
	}

}



