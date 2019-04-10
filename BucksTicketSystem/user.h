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
		string username;
		string password;
};

// constructor
user::user() {
	username = "";
	password = "";
}

// gets login details of user
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
}

// returns the users username
string user::getUsername() {
	return username;
}


// the customer class is derived from the base class user

class customer : public user {
	public:
		customer();
};

// constructor
customer::customer() {
	cout << "Welcome customer, ";
}


// the agent class is derived from the base class user

class agent : public user {
	public:
		agent();
		void getCustomerInfo();
	protected:
		string customerProfileInfo;
};

// constructor
agent::agent() {
	cout << "Welcome agent, ";
}

// gets the customer profile info from the agent
void agent::getCustomerInfo() {
	cout << "Now enter the customer profile information: ";
	getline(cin, customerProfileInfo);
}