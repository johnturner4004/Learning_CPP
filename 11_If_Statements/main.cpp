#include<iostream>
#include<cmath>

using namespace std;

int main() 
{

  bool isFemale = true;
  // if the condition is true, then execute the code block
  if (isFemale) {
    // this will print whenever the condition is true
    cout << "You are a female" << endl;
    // if there is an else statement it will execute if the condition is false
    // else statements are not required
    // if there is not one an else and the statement is false, it does nothing and continues with the code following the if statement
  } else {
    cout << "You are not a female" << endl;
  }

  bool isMale = true;
  bool isTall = true;
  // for multiple conditions && requires both to be true and || only requires one to be true
  if (isMale && isTall) {
    // prints "You are a tall male" when both conditions are true
    cout << "You are a tall male" << endl;
    // ! means not and requires the opposite condition
    // if the first set of conditions is false the program will check the second else if and check it's conditions
  } else if (isMale && !isTall) {
    // prints "You are a short male" when isMale is true but isTall is false
    cout << "You are a short male" << endl;
    // the program continues down through the program until a statement is true
    // once it gets a true statement it executes that block of code and exits the chain of statements
    //if two statements are true, only the first one will execute
  } else if (!isMale && isTall) {
    cout << "You are tall but not a male" << endl;
    // like the first if ... else, the else will execute if all statements are false
  } else {
    cout << "You are not tall and not a male" << endl;
  }

  return 0;

}