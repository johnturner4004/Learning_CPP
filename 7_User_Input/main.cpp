#include<iostream>
#include<cmath>

using namespace std;

int main()
{

  int age;
  cout << "Enter your age: ";
  // works for ints, floats, doubles, and chars
  cin >> age;

  cout << "You are " << age << " years old." << endl;

  // ignores previous input to allow for another; not recommended way to do this
  // but it's good enough for this example
  cin.ignore();
  string name;
  cout << "Enter your name: ";
  getline(cin, name);


  cout << "Hello " << name << endl;

  return 0;

}