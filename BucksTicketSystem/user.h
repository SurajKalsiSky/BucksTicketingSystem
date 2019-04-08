#pragma once

#include <iostream>
#include <string>

using namespace std;

class user {
	public:
		user();
		void getLogin();
		string getUsername();

	protected:
		string firstName;
		string surname;
		string username;
		string password;
};

user::user() {
	firstName = "";
	surname = "";
}

void user::getLogin() {
	cout << "please enter your login details" << endl;
	cout << "Username: ";
	cin.ignore(100, '\n');
	getline(cin, username);

	while (username.length() > 10) {
		cout << "Sorry we do recognise that username, please try again: ";
		getline(cin, username);
	}

	cout << "Password: ";
	getline(cin, password);

	while (password.length() > 10) {
		cout << "Sorry, incorrect password, please try again: ";
		getline(cin, password);
	}
	system("CLS");
}

string user::getUsername() {
	return username;
}


// the customer class is derived from the base class user

class customer : public user {
public:
	customer();
};

customer::customer() {
	cout << "Welcome customer, ";
}


// the agent class is derived from the base class user

class agent : public user {
public:
	agent();
};

agent::agent() {
	cout << "Welcome agent, ";
}