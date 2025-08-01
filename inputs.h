#pragma once
#include <iostream>
#include <limits>
#include <string>

using namespace std;
namespace AllStuff {

	// enter normal number 
	double enter_number(string message){
        cout<<message;
		double number;
         cin>>number;
		 while(cin.fail()){
			cin.clear(); // to claer cin>> to reuse it 
             cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			 cout << '\a';
           system("color 4f"); //red console screen 
		   cout<<"\n\nplease enter correct number!: ";
		   cin>>number;
		 }
		  system("color 0F"); // rest the screen to original color 
		 return number;
	}
	
	// enter postive number
	double enter_postive_number(string text) {
		bool vaild = false ; 
		double n=0; 
		do {
			cout << text;
			cin >> n;
			if(cin.fail()){
                cin.clear(); // to reuse cin>>
				cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
				cout << "\a";
				system("color 4F"); // red if number isn't in range 
			}

			else if (0>=n  ) {
				cout << "\a";
				system("color 4F"); // red if number isn't in range 
				cout << "\nplease enter postive number!\n ";
				
			}
            
			else{
				vaild = true ; 
			}

		} while (vaild == false );
		system("color 0F"); //rest screen color 
		return n;
	}
	 
	// enter nunmber in range
	double enter_number_from_to(double from,double to,string text) {
		bool is_ok= false;
		double number=0;
		do{
			  
			cout << text<< " (" << from << " to " << to << "): ";
			cin >> number;
			if(cin.fail()){
               cin.clear();
			   cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			   cout << "\a";
				system("color 4F"); // red if number isn't in range 
			   cout << "\nplease enter correct number which in range you assigned!\n";
				
			}
			else if (from > number || number > to) {
				cout << "\a";
				system("color 4F"); // red if number isn't in range 
				cout << "\nplease enter correct number which in range you assigned!\n";
			}

			else {
				is_ok = true ; 
			}
		} while (is_ok==false);
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
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
		getline(cin, full);
		return full;
	}

}
