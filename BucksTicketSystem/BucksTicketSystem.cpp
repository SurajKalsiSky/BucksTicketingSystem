// BucksTicketSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include "user.h"
#include "show.h"
#include <iostream>

using namespace std;

int main() {
	// initialise variable
	char userChoice;

	// find out who is using the system
	cout << "Welcome to the Bucks Ticketing System!" << endl << endl;
	cout << "Please let us know who you are by selecting an option below:" << endl;
	cout << "1: Customer" << endl;
	cout << "2: Agent" << endl << endl;
	cout << "Option: ";
	cin.get(userChoice);

	// data validation in case the user does not pick a valid number
	while (userChoice != '1' && userChoice != '2') {
		cin.ignore(100, '\n');
		cout << "Please try again: ";
		cin.get(userChoice);
	}

	// clears the console
	system("CLS");

	// user* USER = new user;
	// tried to make a pointer here

	if (userChoice == '1') {
		// get customer login and information
		customer USER;
		USER.getLogin(); // the getLogin method is polymorphic
		system("CLS");
		cout << USER.getUsername() << " ";
		
	} else {
		// get agent login and information
		agent USER;
		USER.getLogin(); // the getLogin method is polymorphic
		USER.getCustomerInfo();
		system("CLS");

		// get customer info
		cout << USER.getUsername() << " ";
	}

	char ch;

	// display main menu options	
	cout << "has succesfully logged in" << endl << endl;
	cout << "Now select from one of the two options below:" << endl;
	cout << "1: View and buy tickets for shows" << endl;
	cout << "2: Log out of the Bucks Ticketing System and miss out on all the shows" << endl << endl;
	cout << "Option: ";
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
		cout << "Thank you for using the Bucks Ticketing System" << endl << endl;
		return EXIT_SUCCESS;
	}

	if (ch == '1') {
		// select an upcoming show
		system("CLS");
		show SHOW;
		SHOW.selectShowAndDate();
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
