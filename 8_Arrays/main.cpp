#include<iostream>
#include<cmath>

using namespace std;

int main()
{

// to declare an array start with the type of data and then the array name
// followed by square brackets
  int luckyNums[] = {4, 8, 15, 16, 23, 42};
  // putting a number in the square brackets will set the length of the array
  // if you want it to be longer than the number of elements in the array

// to select an element from an array put the index in square brackets
// the index is zero based
  cout << luckyNums[0] << endl;
  //if an array has empty elements you can assign a value to it like this

// to change an element in an array put the index in square brackets
// equals the new value
  luckyNums[0] = 7;

  cout << luckyNums[0] << endl;

  return 0;

}