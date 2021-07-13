# Learning C++

This repository is simply a collection of small tutorial programs. Since these are all so small I am just grouping them together. I will list some details and things learned in writing each program.

## 1 Hello World

Just the basic "Hello World" program that is usually the start of one's journey into learning a new programming.

### Things Learned From Hello World

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

### Things Learned From Variables

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

### Types of Data

* char: a single character
* string: a string of characters
* int: a whole number
* float: a decimal number
* double: a longer decimal number
* bool: true or false values

## 5 Strings

Explores some basic string functions.

### Things Learned from Strings

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

### Things Learned from Numbers

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

## 7 User Input

This gets input data from the user and store it in a variable.

### Things Learned from User Input

* cin retrieves user input for int, float, double, and char but not strings
* getline(cin, variable) will accept a string and assign it to a variable
* all input should be put into a variable so it can be used by the program

## 8 Arrays

This explores storing arrays in variables, updating values, and retrieving values from array variables

### Things Learned from Arrays

* To declare an array variable first enter the type of data it will hold (int, bool, etc)
* Then enter the name you want for the variable followed by [].
* To assign values to it place them in {} and separate with ,
* To initialize an array with empty data slots put a number in the initial [].
* To add or alter data at an index just put the variable name, the index of the data, and set it equal to the new data.
* To get data from an array put the variable followed by the index number in []
* Indexes are zero based

## 9 Functions

This demonstrates the basics of defining a function and parameters and also using a function stub to define a function below the main function.

### Things Learned from Functions

* Functions must be declared before they can be called (above the function call)
* To define a function, first state the type for the return value followed by the name
* The name should be something that makes sense for what the function is doing
* Place () after the functions name
  * If the function needs any input declare variables inside the ().
  * In the function's definition the input is called a parameter.
  * When the function is fun the actual values passed into the function are called arguments
* To call a function simple put its name inside the main including any necessary arguments inside the ().
* The set of instructions for what the function does go inside a pair of {} that are placed immediately after the function (see './9_Functions/main.cpp' for examples)
* If you want to define a function after it has been called, make a stub by declaring it but not defining it
* When you do define your function, define it the same way you would have normally just below where it is called
* The order functions are executed in or even if they are executed is defined in the main() function. The main function will ALWAYS be run first

## 10 Returns

This demonstrates the purpose of return statements.

### Things Learned from Returns

* Return statements are where a function ends
* Anything located after the return statement of a function will not execute
* Return statements return a value to where the function was called
