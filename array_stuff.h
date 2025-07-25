#pragma once

#include<iostream>
using namespace std;

 namespace arraystuff
{

	 // you must define int length or whatever into your program and put this variable in length prarmeter 
	
	 // arrray input 
	 void array_input(int Anyarr[100], int &length) {
		
		
		 for (int i = 0; i < length; i++) {
			 cout << "enter array element " << i + 1 << " index:" << "[" << i << "]" << " ";
			 cin >> Anyarr[i];
		 }
		 
	 }
	 //array ouput 
	 void array_output(int Anyarr[100], int length , string text ) {
		 cout <<text << "[ ";
		 for (int o = 0; o < length; o++)
		 {
			 cout << Anyarr[o] << " ";
		 }
		 cout << " ]" << "\n";
	 }

	 //reverse array output
	 void array_output_reverse(int Anyarr[100], int length ,  string text) {
		 cout << text << "[ ";
		 for (int o = length-1; o >=0; o--)
		 {
			 cout << Anyarr[o] << " ";
		 }
		 cout << " ]" << "\n";
	 }

	 // fill array2
	 void fill_array2(  int number,int Anyarr2[100] , int &length2) {
		 length2++;
		 Anyarr2[length2 - 1] = number;
	 }


}