#include<iostream>

using namespace std;

int main()
{

  string greeting = "Hello";
  cout << greeting;
  // \n also prints new line
  cout << "My name is John\n";

  // prints the length of the string
  cout << greeting.length() << endl;

  // prints the second character of the string
  // index count starts from 0
  cout << greeting[1] << endl;

  // changes the first character to 'B'
  // since index of a string is a char use '' not ""
  greeting[0] = 'B';
  cout << greeting << endl;
  // Lol not it sounds like it is speaking Minionese

  // the find function accepts two arguments or values passed into it
  // finds the index for the character 'o'
  // begins looking from index 0
  // can find a character of string in a string
  cout << greeting.find('o', 0) << endl;

  // prints a string from index 1 to index 3
  // if only one argument is passed to the function it will start from that index
  cout << greeting.substr(1, 3) << endl;

  return 0;

}