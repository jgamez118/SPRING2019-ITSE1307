// StarTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Jonathan Gamez
// ITSE 1307
// This program will ask the user to input the height of the tree then output the tree in *.

#include "pch.h"
#include <iostream>
using namespace std;

void printTree(int intpHeight) {
	//Tree
	int intWidth = 1;
	for (int intRow = 1; intRow < intpHeight; intRow++) {
		for (int intSpaces = 1; intSpaces <= intpHeight - intRow; intSpaces++) {
			cout << " ";
		}
		for (int intColumn = 1; intColumn <= intWidth; intColumn++)
		{
			cout << "*";
		}
		intWidth += 2;
		cout << endl;
	}
	//Trunk
	for (int intSpaces = 1; intSpaces < intpHeight; intSpaces++) {
		cout << " ";
	}
	cout << "*" << endl;
}

// Prompt the user to enter a number for the height of the tree
int main()
{
	int intTreeHeight = 5;

	do {
		cout << "Enter the height of the tree you wish to print as an integer value: ";
		cin >> intTreeHeight;

		printTree(intTreeHeight);

	} while (intTreeHeight != 0);

}