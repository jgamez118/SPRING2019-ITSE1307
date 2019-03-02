// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Jonathan Gamez
ITSE 1307-002
*/


#include "pch.h"
#include <iostream>
//#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	// Declare variables
	double A = 0;
	double B = 0;
	double C = 0;

	// Ask user to enter a (whole or decimal) number for both A and B
	cout << "PLease enter a number for A: " << endl;
	cin >> A;
	cout << "Please enter a number for B: " << endl;
	cin >> B;

	// We do the calculation to find C, and also set a precision for the output
	cout << fixed;
	C = ((double) A *(double) B) / ((double) A - (double) B);
	cout << "The answer for C is: " << setprecision(5) << C << endl;
	
	return 0;
}
