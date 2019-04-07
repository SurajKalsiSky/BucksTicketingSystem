// BucksTicketSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include "pch.h"
#include "user.h"
#include <iostream>

using namespace std;

int main() {
	// initialise variables
	char ch;

	// display main menu options
	cout << "Welcome to the Bucks Ticketing System!" << endl << endl;
	cout << "Please select from one of the two options below:" << endl;
	cout << "1: View and buy tickets for shows" << endl;
	cout << "2: Leave the Bucks Ticketing System and miss out on all the shows" << endl << endl;
	cout << "Option: ";

	user SURAJ;

	SURAJ.getLogin();

	// retrieve the input
	cin.get(ch);

	// data validation in case the user does not pick a valid number
	while (ch != '1' && ch != '2') {
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Try again: ";
		cin.get(ch);
	}

	if (ch == '2') {
		system("CLS");
		cout << "Thank you for using the Bucks Ticketing System" << endl;
		return EXIT_SUCCESS;
	}


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
