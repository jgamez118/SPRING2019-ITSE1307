// LooseChange.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


//This program adds up change the user inputs
#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// Here we declare the different change amounts for each coin
	double dblHalfDollar = .50;
	double dblQuarter = .25;
	double dblDime = .10;
	double dblNickel = .05;
	double dblPennie = .01;
	double change = 0;

	// These variables will be used for the input data by the user
	int intHalfDollars;
	int intQuarters = 0;
	int intDimes = 0;
	int intNickels = 0;
	int intPennies = 0;
	
	cout << "Loose Change Calculator" << endl;

	// Here we ask the user for the number of coins they have
	cout << "How many half dollars are in your pocket? " << endl;
	cin >> intHalfDollars;
	cout << "How many quarters are in your pocket? " << endl;
	cin >> intQuarters;
	cout << "How many dimes are in your pocket? " << endl;
	cin >> intDimes;
	cout << "How many nickels are in your pocket? " << endl;
	cin >> intNickels;
	cout << "How many pennies are in your pocket? " << endl;
	cin >> intPennies;
	
	// We get the change by multiplying the value of the coin by the user input
	change = (dblHalfDollar * intHalfDollars) + (dblQuarter * intQuarters) + (dblDime * intDimes) + (dblNickel * intNickels) + (dblPennie * intPennies);

	// Here we output the result
	cout << "The sum is: " << change << endl;

	return 0;
}

