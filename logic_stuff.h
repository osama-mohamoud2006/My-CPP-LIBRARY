#pragma once
#include <cmath>
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
namespace logic_stuff 
{

	// check it is prime or not 
	bool even_or_odd(int number) {
		if (number % 2 == 0) return true;
		else return false;
	}

	// check even only 
	bool is_even(int number) {
		return (number % 2 == 0);
	}

	// check odd only
	bool is_odd(int number) {
		return (number % 2 != 0);
	}

	// is prime? 
	bool prime_or_not(int number) {
		if (number <= 1) return false;
		int untill = number / 2;
		for (int i = 2; i <= untill; i++) {
			if (number % i == 0) return false;
		}
		return true;
	}

	
	// generate random number {
	double random(int to, int from) {
		return rand() %(to - from + 1) + from;
	}

	// generate random values according to enum 
	enum enCharType { smallLetter = 1, capitalLetter = 2, specialCharacter = 3, digit = 4 };
	char get_random_stuff(enCharType CharType)
	{
		switch (CharType)
		{
		case enCharType::smallLetter:
		{
			return char(random(97, 122));
			break;
		}
		case enCharType::capitalLetter:
		{
			return char(random(65, 90));
			break;
		}
		case enCharType::specialCharacter:
		{
			return char(random(33, 47));
			break;
		}
		case enCharType::digit:
		{
			return char(random(48, 57));
			break;
		}
		}
	}

	// reverse number
	int reversed_number(int Number) {
		int Remainder = 0;
		int Number2 = 0;
		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;
			Number2 = Number2 * 10 + Remainder;
		}

		return Number2;
	}

	// simple calaculator
	enum enoperation {add=1 , sub=2 , div=3 , mod=4 , multi=5};
	double calculator(double number1, double number2 , enoperation type) {
		switch (type) {
		case::add:
			return number1 + number2;
			case::
		}
	}

	// convert char to int

}
