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