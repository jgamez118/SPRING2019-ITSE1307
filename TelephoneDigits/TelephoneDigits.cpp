// TelephoneDigits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char chrLetter;
	int intDigit;
	int intNum;
		
	int intLimit = 10;
	
	//prompt the user to input letters
	cout << "Telephone Digits Program " << endl;

	cout << "Program to convert uppercase letters to "
		<< "their corresponding telephone digits."
		<< endl;

	cout << "To stop the program enter #." << endl;

	cout << "Enter an uppercase letter: ";
	cin >> chrLetter;
	cout << endl;

	while (chrLetter != '#')
	{
		cout << "Letter: " << chrLetter;
		cout << ", Corresponding telephone digit: ";
		//switch statement to match the letter to its corresponding number
		if (chrLetter >= 'A' && chrLetter <= 'Z')
			switch (chrLetter) {
			case 'A':
			case 'a':
			case 'B':
			case 'b':
			case 'C':
			case 'c':
				cout << "2" << endl;
				break;

			case 'D':
			case 'd':
			case 'E':
			case 'e':
			case 'F':
			case 'f':
				cout << "3" << endl;
				break;

			case 'G':
			case 'g':
			case 'H':
			case 'h':
			case 'I':
			case 'i':
				cout << "4" << endl;
				break;

			case 'J':
			case 'j':
			case 'K':
			case 'k':
			case 'L':
			case 'l':
				cout << "5" << endl;
				break;

			case 'M':
			case 'm':
			case 'N':
			case 'n':
			case 'O':
			case 'o':
				cout << "6" << endl;
				break;

			case 'P':
			case 'p':
			case 'Q':
			case 'q':
			case 'R':
			case 'r':
			case 'S':
			case 's':
				cout << "7" << endl;
				break;

			case 'T':
			case 't':
			case 'U':
			case 'u':
			case 'V':
			case 'v':
				cout << "8" << endl;
				break;

			case 'W':
			case 'w':
			case 'X':
			case 'x':
			case 'Y':
			case 'y':
			case 'Z':
			case 'z':
				cout << "9" << endl;
			}
		// else statement for invalid input
		else
			cout << "Invalid Input" << endl;
		
		intNum = static_cast<int>(chrLetter)
			- static_cast<int>('A');

		if (0 <= intNum && intNum < 26)
		{
			intDigit = (intNum / 3) + 2;

			if (((intNum / 3 == 6) || (intNum / 3 == 7))
				&& (intNum % 3 == 0))
				intDigit = intDigit - 1;
			if (intDigit > 9)
				intDigit = 9;

			cout << intDigit << endl;
		}
		else
			cout << "Invalid input." << endl;

		cout << "\nEnter another uppercase "
			<< "letter to find its corresponding "
			<< "telephone digit." << endl;
		cout << "To stop the program enter #."
			<< endl;

		cout << "Enter a letter: ";
		cin >> chrLetter;
		cout << endl;

	} 
	
	return 0;
}