#include<iostream>
#include<cmath>

using namespace std;

//first thing to give a function is the return type
// void returns nothing
//name the function the place () after it
//input for function is in parenthesis and called a parameter
void sayHi(string name, int age) {
  cout << "Hello " << name << ". You are " << age << "years old"<< endl;
}
// function must be called for it to run

//functions need to be declared before they can be called in main
//can create a function stub and define it in after main
void sayHi2(string name, int age);

// always executes the main function first
// then follows the order of the instructions inside that function
int main() 
{

  sayHi("Mike", 60);
  //functions can be reused
  sayHi2("Tom", 45);
  sayHi("John", 35);

  return 0;

}

void sayHi2(string name, int age) {
  cout << "Hello " << name << ". You are " << age << "years old"<< endl;
}