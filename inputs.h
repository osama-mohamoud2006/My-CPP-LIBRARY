#pragma once
#include <iostream>
using namespace std;
namespace inputs {

	// enter postive number
	int enter_postive_number(string text) {
		int n=0; 
		do {
			cout << text;
			cin >> n;
		} while (0 > n);
		return n;
	}
	 
	// enter nunmber in range
	int enter_number_from_to(int from,int to,string text) {
		int number=0;
		do{
			cout << text;
			cin >> number;
		} while (from > number || number > to);
		return number;
	}

}
