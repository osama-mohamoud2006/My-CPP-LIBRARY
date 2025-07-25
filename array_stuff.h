#pragma once

#include<iostream>
using namespace std;

 namespace arraystuff
{

	 // you must define int length or whatever into your program and put this variable in length prarmeter 
	
	 // arrray input 
	 void array_input(int arr[100], int &length) {
		
		
		 for (int i = 0; i < length; i++) {
			 cout << "enter array element " << i + 1 << " index:" << "[" << i << "]" << " ";
			 cin >> arr[i];
		 }
		 
	 }
	 //array ouput 
	 void array_output(int arr[100], int length , string text ) {
		 cout <<text << "[ ";
		 for (int o = 0; o < length; o++)
		 {
			 cout << arr[o] << " ";
		 }
		 cout << " ]" << "\n";
	 }

	 // fill array2
	 void fill_array2(  int number,int Anyarr[100] , int &length2) {
		 length2++;
		 Anyarr[length2 - 1] = number;
	 }


}