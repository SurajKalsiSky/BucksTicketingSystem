#pragma once

#include <iostream>

using namespace std;

class show {
	public:
		show();
		void selectShowAndDate();

	private:
		// encapsulated methods, can only be accessed from this class
		void selectShow();
		void selectTime();

	protected:
		string showname;
		string showdate;
		string showtime;
};

// constructor
show::show() {
	showname = "";
	showdate = "";
	showtime = "";
}

// customer selects an upcoming show
void show::selectShowAndDate() {
	selectShow();
	selectTime();
}

// select a show and date
void show::selectShow() {
	char ch;

	cout << "Choose what show you would like to see:" << endl;
	cout << "1: Thriller (15/4/19)" << endl;
	cout << "2: Aladdin (16/5/19)" << endl;
	cout << "3: The Lion King (3/6/19)" << endl;
	cout << "Option: ";
	cin.ignore(100, '\n');
	cin.get(ch);

	switch (ch) {
	case '1': showname = "Thriller", showdate = "15/4/19";
		break;
	case '2': showname = "Aladdin", showdate = "16/5/19";
		break;
	case '3': showname = "The Lion King", showdate = "3/6/19";
		break;
	}
}

// select a show time
void show::selectTime() {
	char ch;

	cout << "\nChoose what show time you want to go to:" << endl;
	cout << "1: 3pm" << endl;
	cout << "2: 8pm" << endl;
	cout << "Option: ";
	cin.ignore(100, '\n');
	cin.get(ch);

	switch (ch) {
	case '1': showtime = "3pm";
		break;
	case '2': showtime = "8pm";
		break;
	}

	system("CLS");

	cout << "You have selected " + showname + " on " + showdate + " at " + showtime << endl << endl;
	cout << "Your seat number is E8" << endl << endl;
	cout << "Enjoy the show!" << endl << endl;
}