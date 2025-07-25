#pragma once

#include<iostream>
using namespace std;

 namespace arraystuff
{
	
	 // arrray input 
	 void array_input(int arr[100], int &length) {
		
		
		 for (int i = 0; i < length; i++) {
			 cout << "\nenter array element " << i + 1 << " index:" << "[" << i << "]" << " ";
			 cin >> arr[i];
		 }
		 
	 }
	 //array ouput 
	 void array_output(int arr[100], int length ) {
		 cout << "\narray output: " << "[ ";
		 for (int o = 0; o < length; o++)
		 {
			 cout << arr[o] << " ";
		 }
		 cout << " ]" << "\n";
	 }

	 // fill array2
}