// Palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Jonathan Gamez
// ITSE 1307
// This program checks the string inputted and tells whether it's a palindrome or not

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	
	string strInput;


		cout << "Please enter a string: ";
		cin >> strInput;

		// Use rbegin() and rend() to reverse the input of a string
		if (strInput == string(strInput.rbegin(), strInput.rend())) {
			cout << strInput << " is a palindrome" << endl;
		}
		// add an else statement for when the statement is not true
		else
			cout << strInput << " is not a palindrome" << endl;

	return 0;
}

