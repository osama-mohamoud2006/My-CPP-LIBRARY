#pragma once

#include<iostream>
#include <ctime>
#include<cstdlib>
using namespace std;

 namespace arraystuff
{
	
	 // random generator
	 int random(int from, int to) {
		 return rand() % (to - from + 1) + from;
	 }


	 // you must define int length or whatever into your program and put this variable in length prarmeter 
	
	 // arrray input 
	 void array_input(int Anyarr[100], int length) {
		
		
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

	 //array filled with random number
	 // length is indicating the number of elements you want
	 void array_filled_with_random_numbers(int from, int to, int Anyarr[100], string text, int length) {
		 for (int f = 0; f < length; f++) 
			 Anyarr[f] = random(from, to);
		 
	 }
 
	 //get max number in array 
	 int max_number_in_array(int Anyarr[100], int length) {
		 int max = Anyarr[0];
		 for (int m = 0; m < length; m++)
			 if (Anyarr[m] > max) max = Anyarr[m];
		 return max;
	 }


	 // get min number in array
	 int min_number_in_array(int Anyarr[100], int length) {
		 int min = Anyarr[0];
		 for (int m = 0; m < length; m++)
			 if (Anyarr[m] < min) min = Anyarr[m];
		 return min;
	 }

}