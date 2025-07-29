#pragma once

#include<iostream>
#include <ctime>
#include<cstdlib>
#include"E:\projects\my library\AllStuff.h"  
using namespace AllStuff;
using namespace std;

 namespace AllStuff
{
	
	 // random generator
	// Alerady used in logic_stuff library 


	 // you must define int length or whatever into your program and put this variable in length prarmeter 
	
	 // arrray input for int (oveloading functions)
	 void array_input(int Anyarr[100], int length) {
		 for (int i = 0; i < length; i++) {
			 cout << "enter array element " << i + 1 << " index:" << "[" << i << "]" << " ";
			 cin >> Anyarr[i];
		 }
		 
	 }
	 void array_input(string Anyarr[100], int length) {
		 for (int i = 0; i < length; i++) {
			 cout << "enter array element " << i + 1 << " index:" << "[" << i << "]" << " ";
			 cin >> Anyarr[i];
		 }
		 
	 }

	 

	 //array ouput 

	 // for int
	 void array_output(int Anyarr[100], int length , string text ) {
		 cout <<text << "[ ";
		 for (int o = 0; o < length; o++)
		 {
			 cout << Anyarr[o] << " ";
		 }
		 cout << " ]" << "\n";
	 }

        //for string	 
     void array_output(string Anyarr[100], int length , string text ) {
		 cout <<text << "[ ";
		 for (int o = 0; o < length; o++)
		 {
			 cout << Anyarr[o] << " ";
		 }
		 cout << " ]" << "\n";
	 }



	 //reverse array output
	 void array_output_reverse(string Anyarr[100], int length ,  string text) {
		 cout << text << "[ ";
		 for (int o = length-1; o >=0; o--)
		 {
			 cout << Anyarr[o] << " ";
		 }
		 cout << " ]" << "\n";
	 }

	  void array_output_reverse(int Anyarr[100], int length ,  string text) {
		 cout << text << "[ ";
		 for (int o = length-1; o >=0; o--)
		 {
			 cout << Anyarr[o] << " ";
		 }
		 cout << " ]" << "\n";
	 }



	 // fill array2
	 // oveloaded function 

	 // for int
	 void fill_array2(  int number,int Anyarr2[100] , int &length2) {
		 length2++;
		 Anyarr2[length2 - 1] = number;
	 }
       
	 //for string 
	  void fill_array2( string word , string Anyarr2[100] , int &length2) {
		 length2++;
		 Anyarr2[length2 - 1] = word;
	 }


	 //array filled with random number
	 // length is indicating the number of elements you want
	 void array_filled_with_random_numbers(int from, int to, int Anyarr[100], string text, int length) {
		 cout << text;
		 for (int f = 0; f < length; f++) {
			 Anyarr[f] = random(from, to);
		 }
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

	 // is number that provided by user in array?
	 bool is_number_in_array(int number, int Anyarr[100], int length) {
		 for (int n = 0; n < length; n++) {
			 if (number == Anyarr[n]) return true;
		 }
			  return false;
	 }

	 // the sum of array elements 
	 int sum_of_array(int Anyarr[100], int length) {
		 int sum = 0; 
		 for (int s = 0; s < length; s++) {
			 sum += Anyarr[s];
		 }
		 return sum;
	 }

	 // the avg of array elements 
	 double avg_of_array(int Anyarr[100], int length) {
		 return (float)sum_of_array(Anyarr, length) / length;
	 }



}