#include "pch.h"
#include "Contact.h"


Contact::Contact()
{
}


Contact::~Contact()
{
}


void Contact::setFirstName(std::string strpFirstName)
{
	if (strpFirstName.length() <= 0) {
		strpFirstName = "First";
	}
	strFirstName = strpFirstName;
}


std::string Contact::getFirstName()
{
	return strFirstName;
}


void Contact::inputFirstName()
{
	std::string strInputFirstName = "";
	do {
		std::cout << "Please enter a First name: ";
		std::cin >> strInputFirstName;
	} while (strInputFirstName.length() < 1);
	setFirstName(strInputFirstName);
}


void Contact::setLastName(std::string strpLastName)
{
	if (strpLastName.length() <= 0) {
		strpLastName = "Last";
	}
	strLastName = strpLastName;
}


std::string Contact::getLastName()
{
	return strLastName;
}


void Contact::inputLastName()
{
	std::string strInputLastName = "";
	do {
		std::cout << "Please enter a Last name: ";
		std::cin >> strInputLastName;
	} while (strInputLastName.length() < 1);
	setLastName(strInputLastName);
}

void Contact::setPhoneNumber(std::string strpPhoneNumber)
{
	if (strpPhoneNumber.length() <= 0) {
		strpPhoneNumber = "Number";
	}
	strLastName = strpPhoneNumber;
}

std::string Contact::getPhoneNumber()
{
	return strPhoneNumber;
}

void Contact::inputPhoneNumber()
{
	std::string strInputPhoneNumber = "";
	do {
		std::cout << "Please enter a Phone Number: ";
		std::cin >> strInputPhoneNumber;
	} while (strInputPhoneNumber.length() < 1);
	setPhoneNumber(strInputPhoneNumber);
}

std::string Contact::toString()
{
	std::string strDelimiter = ", ";
	std::string strOutput = "";
	strOutput += getFirstName() + strDelimiter;
	strOutput += getLastName() + strDelimiter;
	strOutput += getPhoneNumber() + strDelimiter;
	return strOutput;
}


void Contact::input() {
	this->inputFirstName();
	this->inputLastName();
	this->inputPhoneNumber();
}
