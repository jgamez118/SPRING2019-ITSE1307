// Roman Numeral.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Jonathan Gamez
// ITSE 1307-002

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

/*
	Converts a roman numeral character to decimal, used for romanNumeralToDecimal function.
*/

int intRomanNumeralToDecimalConverter(char chrRomanNumeral)
{
	if (chrRomanNumeral == 'I')
		return 1;
	else if (chrRomanNumeral == 'V')
		return 5;
	else if (chrRomanNumeral == 'X')
		return 10;
	else if (chrRomanNumeral == 'L')
		return 50;
	else if (chrRomanNumeral == 'C')
		return 100;
	else if (chrRomanNumeral == 'D')
		return 500;
	else if (chrRomanNumeral == 'M')
		return 1000;
	else
		return 0;
	
	/*
	Converts the Roman Numeral to Decimal Numerals , compare it to the next character to see if it's greater or equal, and if so then add it to
	result, else take it off by just adding the next character to result.
	*/

	int romanNumeralToDecimalConverter(string &input)
	{
		int intResult = 0;

		for (size_t chrCharacter = 0; chrCharacter < input.intLength(); chrCharacter++)
		{
			// Get the decimal of the Roman Numeral Input
			int intCurrent = romanNumeralCharToDecimalConverter(input[chrCharacter]);

			// Check if end of list
			if (character + 1 < input.length())
			{
				int next = romanNumeralCharToDecimal(input[character + 1]);
				if (current >= next) // Compare them to see which one to use
				{
					intResult = intResult + current;
				}
				else
				{
					intResult = intResult + next - current;
					chrCharacter++;
				}
			}
			else
			{
				intResult = result + current;
				character++;
			}
			return intResult;
		}

		
	}


int main()
{
	cin.get();

	return 0;
}