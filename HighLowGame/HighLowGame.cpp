// HighLowGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Jonathan Gamez
// ITSE 1307
// Simple High Low Guessing Game

/*
	Pick a random number.
	Have the user guess the number.
	Display output based on users guess.
	Repeat asking for users guess until it is equal to random number.
	Display winning if user guessed random number.
*/

#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL)); //Get random time

	int intLimit = 100; //Set limit for guess

	int intGuess = rand() % intLimit + 1; //Give me a number between 0 and 51 then add 1.
	int intTries = 10;
	bool boolFound = false;
	char chChoice;
	bool GuessingGame = true;
	int intCurrentGuess = 1;

	while (GuessingGame) {
		do { //Not equal to guess

			do { //User Input
				cout << "Please enter a number between 1 and " << intLimit << ": ";
				cin >> intCurrentGuess;

				//boolFound = false;
			} while (intCurrentGuess < 1 || intCurrentGuess > intLimit);

			if (intCurrentGuess > intGuess) { //Tells the user if they guessed too high
				cout << "You guessed to high!" << endl;
			}
			else if (intCurrentGuess < intGuess) { //Tells the user if they guessed too low
				cout << "You guessed to low!" << endl;
			}
			else {
				cout << "You guessed wisely! Congrats YOU WIN NOTHING!" << endl; //Outputs when the user guesses the number correctly
			}
			if (!boolFound) {
				intTries--; // Deducts the number of guesses the user has left
				cout << "You have " << intTries << " tries left." << endl; 
				continue; //Goto label 'continue'

			}
		} while (intCurrentGuess != intGuess && intTries > 0); {

			cout << "Would you like to play again?  Enter Y/N" << endl; //Gives the user the option to play again
			cin >> chChoice;
			if (chChoice == 'Y' || chChoice == 'y') {
				intGuess = rand() % intLimit + 1;
				GuessingGame = true;
			}
			else {
				cout << "Thanks for playing!" << endl; // if the user types anything other than Y or y the game program will exit
				GuessingGame = false;
			}
		}
	}
	return 0;
}
