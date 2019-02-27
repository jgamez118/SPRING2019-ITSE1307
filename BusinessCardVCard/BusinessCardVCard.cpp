// BusinessCardVCard.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Jonathan Gamez
ITSE-1307-002
2/20/19
*/

// We have to include fstream
#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// Use ofstream to output files. Used to create files and write information to files
	ofstream fileVCard;

	// Here we select the name and type of file then begin to send information to it for the bussiness card
	fileVCard.open("name.vcf");
	fileVCard << "BEGIN:VCARD" << endl;
	fileVCard << "N:Business Card:JAG::" << endl;
	fileVCard << "FN:JAG Business Card" << endl;
	fileVCard << "TEL:CELL;VOICE:(210)-073-1985" << endl;
	fileVCard << "TEL:WORK;VOICE:(210)-214-2016" << endl;
	fileVCard << "ADR:TYPE;HOME;LABEL = 1010 King Court, TX 72345" << endl;
	fileVCard << "EMAIL:JohnG@gmail.com" << endl;
	fileVCard << "END:VCARD" << endl;
	// Here we end the file and then close it
	fileVCard.close();
	
	return 0;
}




