// Vowels.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Jonathan Gamez
// ITSE 1307
// This is a program to see if a letter inputted by the user is a vowel or consonant
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char chrLetter = 0;
	/*do {
		cin >> chrLetter;
		if (chrLetter > 0)
		{
			cout << chrLetter << " is a vowel." << endl;
		}
		else
			cout << chrLetter << " is a consonant." << endl;
	} while (true);
	*/
	cout << "Please enter a letter to check if it's a vowel or consonant: " << endl;
	cin >> chrLetter;

	if (chrLetter >= 'A' && chrLetter <= 'Z')
		switch (chrLetter) {
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			cout << chrLetter << " is a vowel" << endl;
			break;

		}
	else
		cout << chrLetter << " is a consonant" << endl;
	
	return 0;
}

