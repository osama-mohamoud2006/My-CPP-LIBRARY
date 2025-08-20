#pragma once
#include <cmath>
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
enum enCharType
{
	smallLetter = 1,	  // Represents lowercase letters (ASCII 97 to 122).
	capitalLetter = 2,	  // Represents uppercase letters (ASCII 65 to 90).
	specialCharacter = 3, // Represents special characters (ASCII 33 to 47).
	digit = 4			  // Represents digits (ASCII 48 to 57).
};
enum enoperation
{
	add = 1,
	sub = 2,
	divison = 3,
	mod = 4,
	multi = 5
};
enum enScreen_color
{
	black = 1,
	red = 2,
	yellow = 3,
	green = 4,
	red_on_black = 5,
	purple = 6
};
namespace AllStuff
{

	// check it is even or odd even return true , odd return false
	bool even_or_odd(int number)
	{
		bool result;
		(number % 2 == 0) ? result = true : result = false;
		return result;
	}

	// check even only
	bool is_even(int number)
	{
		return (number % 2 == 0);
	}

	// check odd only
	bool is_odd(int number)
	{
		return (number % 2 != 0);
	}

	// is prime?
	bool prime_or_not(int number)
	{
		if (number <= 1)
			return false;
		int untill = number / 2;
		for (int i = 2; i <= untill; i++)
		{
			if (number % i == 0)
				return false;
		}
		return true;
	}

	// generate random number {
	int random(int from, int to)
	{
		return rand() % (to - from + 1) + from;
	}

	// generate random values according to enum
	char get_random_stuff(enCharType CharType)
	{
		// Use a switch-case to handle the different character types.
		switch (CharType)
		{
		case enCharType::smallLetter:
			return char(random(97, 122));
			break;
		case enCharType::capitalLetter:
			return char(random(65, 90));
			break;
		case enCharType::specialCharacter:
			return char(random(33, 48));
			break;
		case enCharType::digit:
			return char(random(48, 57));
			break;
		default:
			return '\0';
		}
	}

	// reverse number
	int reversed_number(int Number)
	{
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

	// reverse string
	string reverse_word(string yourword)
	{
		string reversed = "";
		for (int i = yourword.length() - 1; i >= 0; i--)
		{

			reversed += yourword[i];
		}
		return reversed;
	}

	// simple calaculator
	double calculator(double number1, double number2, enoperation type)
	{
		switch (type)
		{
		case ::enoperation::add:
			return number1 + number2;

		case ::enoperation::sub:
			return number1 - number2;

		case enoperation::divison:
			if (number2 == 0)
				return number1;
			else
				return number1 / number2;

		case enoperation::mod:
			if (number1 > 0.0 || number2 > 0.0)
				return fmod(number1, number2);
			else
				return (int)number1 % (int)number2;

		case enoperation::multi:
			return number1 * number2;

		default:
			return 0;
		}
	}

	// convert char to int
	int char_to_int(char i)
	{
		int digit = i - '0';
		return digit;
	}

	// count how many times number repeated
	int count_digit_frequency(short DigitToCheck, int Number)
	{
		int FreqCount = 0, Remainder = 0;
		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;

			if (DigitToCheck == Remainder)
			{
				FreqCount++;
			}
		}
		return FreqCount;
	}

	// change screen color
	void screen_color(enScreen_color color)
	{
		if (color == black)
			system("color 0F"); // black
		if (color == green)
			system("color 2F"); // green
		if (color == yellow)
			system("color 6F"); // yellow
		if (color == red)
			system("color 4F"); // red
		if (color == red_on_black)
			system("color 0C"); // red on black
		if (color == purple)
			system("color 0D"); // purple text
	}

	// check if it is digit or number
	bool is_it_number(char i)
	{
		bool res;
		(isdigit(i)) ? res = true : res = false; // it is number
		//  return false; // it is char
		return res;
	}

	//the whole string to upper
	string Upper(string word)
	{
		for (int i = 0; i < word.size(); i++)
		{
			word[i] = toupper(word[i]);
		}
		return word;
	}

	// the whole string to lower
	string (string word)
	{
		for (int i = 0; i < word.size(); i++)
		{
			word[i] = tolower(word[i]);
		}
		return word;
	}

	void CPlusPlusVersion()
	{

		cout << "C++ Version: " << __cplusplus << endl;
		if (__cplusplus == 201703L)
		{
			cout << "C++17" << endl; // 201703L | C++17
		}
		else if (__cplusplus == 201402L)
		{
			cout << "C++14" << endl; // 201402L | C++14
		}
		else if (__cplusplus == 201103L)
		{
			cout << "C++11" << endl; // 201103L | C++11
		}
		else if (__cplusplus == 199711L)
		{
			cout << " C++98 / C++03" << endl; // 199711L | C++98 / C++03
		}
		else
		{
			cout << "Unknown C++ version" << endl;
		}
	}

}
lower