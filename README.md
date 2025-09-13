
# 📚 My C++ Utility Library

This is a small personal C++ library I built to collect the things I use a lot in my projects, including:

* Array helpers
* Input/output utilities
* Common logic and patterns I reuse often
* Miscellaneous functions that save me time

The goal is to avoid rewriting the same code over and over, and to keep things modular and reusable across different projects.

🔧 Still a work in progress — I keep adding to it as I go.

---

# 🔁 logic\_stuff Library

## Library’s functions:

* `even_or_odd(int number)`
  Check if number is odd or even. If even, will return `true`; else returns `false`. *(boolean)*

* `is_even(int number)`
  Return `true` if number is **even only**. *(boolean)*

* `is_odd(int number)`
  Return `true` if number is **odd only**. *(boolean)*

* `prime_or_not(int number)`
  Check if number is prime or not. Returns `true` if it is. *(boolean)*

* `random(int to, int from)`
  Generate random numbers in a user-defined range. *(int)*

* `get_random_stuff(enCharType CharType)`
  Return random character according to:

  ```cpp
  enum enCharType { smallLetter = 1, capitalLetter = 2, specialCharacter = 3, digit = 4 };
  ```

  *(char)*

* `reversed_number(int Number)`
  Return your number reversed. *(int)*

* `calculator(double number1, double number2, enoperation type)`
  Simple calculator that returns result based on operation:

  ```cpp
  enum enoperation { add = 1, sub = 2, divison = 3, mod = 4, multi = 5 };
  ```

  *(double)*

* `char_to_int(char i)`
  Converts a numeric char to int, useful in string/loop scenarios. *(int)*

* `count_digit_frequency(short DigitToCheck, int Number)`
  Count how many times a digit appears in a number. *(int)*

* `screen_color(enScreen_color color)`
  Changes console screen color according to:

  ```cpp
  enum enScreen_color { black = 1, red = 2, yellow = 3, green = 4, red_on_black = 5, purple = 6 };
  ```

  *(void)*

* `is_it_number(char i)`
  Check if the character is a digit. Returns `true` if digit, `false` otherwise. *(boolean)*

---

# 🎯 inputs Library

## Library’s functions:

* `enter_postive_number(string text)`
  To enter positive numbers only. *(double)*

* `enter_number_from_to(int from, int to, string text)`
  To enter a number in a specific range. *(double)*

* `read_string(string message)`
  Read a string without spaces. *(string)*

* `read_full_line(string message)`
  Read a full line including spaces. *(string)*

---

# 🧬 array\_stuff Library

## Library’s functions:

* `array_input(int Anyarr[100], int length)`
  Input array elements.

* `array_output(int Anyarr[100], int length, string text)`
  Output array elements.

* `array_output_reverse(int Anyarr[100], int length, string text)`
  Output array elements in reverse order.

* `fill_array2(int number, int Anyarr2[100], int &length2)`
  Fill another array with a specific number. You should initialize `length2` in `main()`.

* `array_filled_with_random_numbers(int from, int to, int Anyarr[100], string text, int length)`
  Fill array with random numbers in a range.

* `max_number_in_array(int Anyarr[100], int length)`
  Return the max number in the array.

* `min_number_in_array(int Anyarr[100], int length)`
  Return the min number in the array.

* `is_number_in_array(int number, int Anyarr[100], int length)`
  Return `true` if number exists in array, `false` otherwise.

* `sum_of_array(int Anyarr[100], int length)`
  Return the sum of array elements.

* `avg_of_array(int Anyarr[100], int length)`
  Return the average of array elements.

## Library’s new functions:

* `array_input(string Anyarr[100], int length)`
  c

* `array_input(char Anyarr[100], int length)`
  To input char array elements from user.

* `array_output(char Anyarr[100], int length , string text)`
  To output char array elements with custom text.

* `array_output_reverse(string Anyarr[100], int length , string text)`
  To reverse the output of string array elements.

* `array_output_reverse(char Anyarr[100], int length , string text)`
  To reverse the output of char array elements.

* `fill_array2(string word , string Anyarr2[100] , int &length2)`
  Fill another string array with a word, and increment length2.

* `fill_array2(char c , char Anyarr2[100] , int &length2)`
  Fill another char array with a character, and increment length2.

* `array_filled_with_random(enCharType type ,char Anyarr[100], int length)`
  Fill char array with random characters based on enum `enCharType`.

* `array_filled_with_random(enCharType type ,string Anyarr[100], int length)`
  Fill string array with random characters based on enum `enCharType`.

* `generate_random_word(enCharType CharType, short Length)`
  Generate a random word of specific length based on enum `enCharType`.

* `max_number_in_array(float Anyarr[100], int length)`
  Return the maximum number in float array.

* `min_number_in_array(float Anyarr[100], int length)`
  Return the minimum number in float array.

* `sum_of_array(float Anyarr[100], int length)`
  Return the sum of float array elements.

* `Upper(string word)`  
  convert the whole string to Uppercase

* `lower(string word)`
 convert the whole string to lower

* `invert(char c)`
  invert the char 

* `CPlusPlusVersion`
to know your cpp ver

* `SplitString`
to split string in single words 

* `back_to_menu`
to show text when you back to main menu or after function finished

* `print_menu_option`
 to print menu option 
 
* `EnterY_N()`
enter yes or not return true if yes

