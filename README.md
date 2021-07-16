# Learning C++

This repository is simply a collection of small tutorial programs. Since these are all so small I am just grouping them together. I will list some details and things learned in writing each program. For specific examples of the topics below look in the main.cpp of the corresponding folder. For C++ programs it is normal to name the file after it's primary function. While a program can have multiple files and functions, it must always have a main() function.

## 1 Hello World

Just the basic "Hello World" program that is usually the start of one's journey into learning a new programming. Even this simple program still has a main() as every C++ program must have a main(). Code is executed in the order that it is written in in the main() function. The main function is where the program starts.

### Things Learned From Hello World

* File extension for source code is cpp
* File containing main() should be called main.cpp
* iostream is the header file for input output functions
* The code for a function is enclosed in {}
* With few exceptions a line of code should end in a ;
* Use #include followed by the header file enclosed in <> to use it
* main() is where execution of the program begins
  * Every program MUST have a main()
* cout prints output string
* Strings are enclosed in ""
* endl ends a line of string outputs
* Every function should have a return even if it is not returning anything
  * If there is no return use return 0

## 2 Triangle

This program extends on the previous by printing multiple lines of text. The triangle is just made with characters in a string on various lines.

## 3 Variables

In this program, variables are used to contain data and print manipulate the output with the variables. A variable contains a value that can be reused and changed.

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

This explores storing arrays in variables, updating values in arrays, and retrieving values from array variables. An array is a variable that contains a series of values.

### Things Learned from Arrays

* To declare an array variable first enter the type of data it will hold (int, bool, etc)
* Then enter the name you want for the variable followed by [].
* To assign values to it place them in {} and separate with ,
* To initialize an array with empty data slots put a number in the initial [].
* To add or alter data at an index just put the variable name, the index of the data, and set it equal to the new data.
* To get data from an array put the variable followed by the index number in []
* Indexes are zero based

## 9 Functions

This demonstrates the basics of defining a function and parameters and also using a function stub to define a function below the main function. A function is a re-usable block of code that sometimes takes in arguments and returns a value and other times it just performs some action.

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

This demonstrates the purpose of return statements. A return statement is used to return a value from a function.

### Things Learned from Returns

* Return statements are where a function ends
* Anything located after the return statement of a function will not execute
* Return statements return a value to where the function was called

## 11 If Statements

This demonstrated how to use if statements in a function

### Things Learned from If Statements

* an if statements gives a set of conditions followed by a block of code
* to set up one start with the word if followed by the conditions in () followed by {} containing a block of code
  * see ./11_If_Statements/main.cpp for examples
* the code only executed if the condition(s) are true
* To request a statement be false, placing ! in front of it checks if it is not true
  * ex. !variable
* an else statement can follow an if statement and will be executed if the if statement is false
* an if does not need an else. The code will just do nothing and continue
* an if can only have one else statement
* to have multiple scenarios use an else if statement to have another set of conditions to check followed by a block of code
* else if statements are structured similar to an if statement
  * see ./11_If_Statements/main.cpp for examples
* any number of else if statements can be chained together
* if multiple statements are true only the first is executed

## 12 Comparisons

This shows how to use comparisons in an if statement. A comparison compares two values to each other.

### Things Learned from Comparisons

* Comparisons compare two numbers to each other
* The following are all different comparison symbols
  * < less than
  * \> greater than
  * == equal to
    * a single = is used to assign values to a variable
    * to say two numbers are equal use ==
  * <= less than or equal two
  * \>=  greater than or equal to
  * != not equal to

## 13 Switch Statements

This shows how to use a switch statement in a function. Switch statements are similar to a chain of if-else statements but they are easier to read and look cleaner.

### Things Learned from Switch Statements

* Switch statements work similar to a chain of if-else statements
* To start a switch statement begin with the word switch followed by the variable it is checking in ().
* Following that their is a list of cases inside {}.
* each case has a value followed by :
* Each case contains a block of code with a break statement for each case to stop executing the code for that case and exit the switch statement.
* When the variable == the case value the code inside the case is executed.
* If none match, the default case is executed.

## 14 While Loops

This demonstrates how to structure and loop a while loop. A while loop is a block of code that executes repeatedly while a condition is true.

### Things Learned from While Loops

* A while loop is started with the keyword while followed by a condition in ().
* If the condition is true the code inside the while loop is executed.
* The code will continue to execute until the condition is false.
* Be careful not to create an infinite loop.
  * An infinite loop is caused by a condition that will never become false.
  * Infinite loops can crash your program or even the computer.
* If the initial condition is false, the while loop does not execute.
* A do-while loop is similar to a while loop except the condition is evaluated after the block of code is executed.
  * This causes the code to be executed at least once even if the initial condition is false.

## 15 For Loops

This demonstrates how to use for loops in C++. For loops are similar to while loops with a few differences.

### Things Learned from For Loops

* For loops stat with the keyword "for" followed by () containing instructions on how the loop will run.
  * The first instruction initializes a variable to use as an index.
  * The second is a condition. Like a while loop the for loop will run until the condition is false.
  * Finally the third is instruction on how the index variable changes after each loop (usually i++).
* Lastly the () are followed by a block of code contained in {}

## 16 Exponent Functions

This was more of an example of using a for loop to make an exponent function.

## 17 2d Arrays and Nested For Loops

This demonstrates how to declare and reference a 2d array and how to use a nested for loop to iterate over the array.

### Things Learned from 2d Arrays and Nested For Loops

* A 2d array is like an array of arrays.
* To set up a 2d array, declare a variable with the type of data in the array
* After that place two sets of []. One for each dimension of the array.
  * Unlike 1d arrays, a number of elements in the array must be entered.
  * The first number is the number of rows or arrays in the array.
  * The second is the number of elements or columns in those arrays.
  * Remember this is a count of how many elements there are not their index.
* To iterate over the array you generally use a nested for loop.
  * Basically a for loop in a for loop.
  * The first loops through the rows or arrays of the array.
  * The second loops through the columns or elements of those arrays.

## 18 Pointers

A pointer references the memory location of a variable. This example shows how to use pointers.

### Things Learned from Pointers

* Pointers reference the memory location of a variable.
* To get a pointer, put a & before the variable name.
* Pointers can be stored in a variable
  * To declare a pointer variable start with the type of data of the variable if references
  * Place a *p followed by the name of the variable in camel case.
  * Then set it equal to the pointer you want to store in it (ex. int *pAge = &Age)
* To get the memory address just call the pointer variable (ex. pAge)
* To get the value of the memory at that address dereference the pointer by placing a \* before it (ex. *pAge)

## 19 Classes and Objects

Classes are custom data types that can be created to store information about things that can't be described with just a single data type. An object is an instance of a class. This example shows how to create and use classes and objects. 

### Things Learned from Classes and Objects

* Classes are custom data types
* To create a class, use the keyword class followed by the name of the class
* Inside {} after the class name, list the members of the class beginning with the type of data and the name of the member
* Access specifiers are used to specify the access of a member (public, private, protected)
* Access is private by default
* For any members that are not private, specify the access level followed by all members of the class that are that access level
* To create an object, use the class name followed by the name of that object
* To assign values to the members of the object, use the object followed by a '.' then the name of the member and set it = to the value
* Values of members are accessed and changed using the same method