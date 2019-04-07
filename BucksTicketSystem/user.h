#pragma once

#include <iostream>

using namespace std;

class user {
	public:
		user();
		void getLogin();
};

user::user() {
	cout << "Constructor!" << endl << endl;
}

void user::getLogin() {
	cout << "Hello  :D" << endl << endl;
}