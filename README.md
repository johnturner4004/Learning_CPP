# Learning C++

This repository is simply a collection of small tutorial programs. Since these are all so small I am just grouping them together. I will list some details and things learned in writing each program.

## 1 Hello World

Just the basic "Hello World" program that is usually the start of one's journey into learning a new programming.

### Things Learned From Hello World:

* File extension for source code is cpp
* File containing main() should be called main.cpp
* iostream is the header file for input output functions
* The code for a function is enclosed in {}
* With few exceptions a line of code should end in a ;
* Use #include followed by the header file enclosed in <> to use it
* main() is where execution of the probram begins
  * Every program MUST have a main()
* cout prints output string
* Strings are enclosed in ""
* endl ends a line of string outputs
* Every function should have a return even if it is not returning anything
  * If there is no return use return 0

## 2 Triangle

This program extends on the previous by printing multiple lines of text. The triangle is just made with characters in a string

## 3 Variables

In this program, used variables to contain data and print manipulate the output with the variables

### Things Learned From Variables:

* Variables must be initialized with a type
* 2 of the data types are string and int
  * string is just a string of text
  * int is a number
* To initialize a variable, put the type first followed by what you want to call the variable
  * ex. string name = "John";
* To change a variable simply set the variable equal to the new value
  * Must be the same type of data
  * ex. name = "Blake";

## 4 Data Types

This contains one of each variable type as an example. Was not compiled as the compiled program would not do anything. It honestly could have just been a md file but I decided to use it to practice my basic structure for a C++ program

### Types of Data:

* char: a single character
* string: a string of characters
* int: a whole number
* float: a decimal number
* double: a longer decimal number
* bool: true or false values

## 5 Strings

Explores some basic string functions.

### Things Learned from Strings:

* \n is another way to start a newline
* Placing [] with a number inside after a string variable returns the character at that index
* .length() after a string variable returns its length
* a value passed into a function between the () is an argument
* .find() returns the index of a character
  * it accepts two arguments
  * the first is the character of string you are searching for
  * the second is what index to start searching at
* .substr() returns a string from inside the string
  * also accepts two arguments
  * the first is the beginning index
  * the second is the ending index
  * the second argument is optional
  * if only one argument is given the function returns from the start index through the end of the string

## 6 Numbers

This explores using numbers in C++ including printing, variables, math operators, and some commonly used math functions.

### Things Learned from Numbers:

* No special formatting is required to use a number
* Variables must declare number type
* Numbers not in variables will have type set by what type on number is used
  * 3 = integer
  * 3.0 = float
* Be careful to use the correct type of number
  * 10 and 3 are both integers so 10 / 3 = 3
  * 10 and 3.0 is an integer and a float so 10 / 3.0 is 3.33... since one is a float
* Five basic operators for using numbers are:
  * Addition: +
  * Subtraction: -
  * Multiplication: *
  * Division: /
  * Modulo (returns remainder of division): %
* ++ and -- either increment or decrement a number by one
* cmath is a commonly used library of math functions in C++
  * pow(num, exponent) returns num ^ exp
  * sqrt(num) returns square root of num
  * round(num), ceil(num), and floor(num) are different ways to round a number
  * fmax(num1, num2) and fmin(num1, num2) return the max and min of a pair of numbers