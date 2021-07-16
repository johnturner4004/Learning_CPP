#include<iostream>

using namespace std;

int main()
{

  int age = 19;
  double gpa = 2.7;
  string name = "Mike";

  // This is a pointer to the address of the age variable
  // A pointer is gives the memory address of a variable
  // To use a pointer, use an & followed by the variable name
  cout << &age << endl;
  cout << &gpa << endl;
  cout << &name << endl;

  // These are pointer variables
  // They start with a * and a lower case p followed by the name of the variable whose address is being pointed to
  // They type needs to match the type of data that is being pointed to
  int *pAge = &age;
  double *pGpa = &gpa;
  string *pName = &name;

  // Using the pointer variable gives your the memory address of the variable
  cout << pAge << endl;
  // Dereferencing the pointer gives you the value stored at the memory address
  // To dereference a pointer, use the * symbol followed by the pointer variable
  cout << *pAge << endl;

  return 0;

}