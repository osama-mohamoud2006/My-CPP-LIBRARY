#pragma once
#include <iostream>
#include <string>
#include <Bits.h>
using namespace std;
namespace inputs {

	// enter postive number
	double enter_postive_number(string text) {
		double n=0; 
		do {
			cout << text;
			cin >> n;
			if (0>n) {
				cout << "\nplease enter correct number which in range you assigned!\n";
				cout << "\a";
				system("color 4F"); // red if number isn't in range 
			}
		} while (0 > n);
		system("color 0F"); //rest screen color 
		return n;
	}
	 
	// enter nunmber in range
	double enter_number_from_to(double from,double to,string text) {
		double number=0;
		do{
			cout << text;
			cin >> number;
			if (from > number || number > to) {
				cout << "\nplease enter correct number which in range you assigned!\n";
				cout << "\a";
				system("color 4F"); // red if number isn't in range 
			}
		} while (from > number || number > to);
		system("color 0F"); //rest screen color 
		return number;
	}

	// read string 
	string read_string(string message) {
		cout << message;
		string str;
		cin >> str;
		return str;
	}

	// read full line
	string read_full_line(string message) {
		cout << message;
		string full;

		getline(cin, full);
		return full;
	}

}
