#include<iostream>
#include<array>

using namespace std;

int main()
{

  int nums[] = {1, 2, 5, 7, 3};
  // for loops start with the keyword "for"
  // following the for are () containing three statements
  // the first statement initializes a variable to be used as an index
  // The second is a condition that will allow the loop to continue until it is false
  // The third is what changes from one loop to the next, usually i++
  for(int i = 0; i < 5; i++) {
    cout << nums[i] << endl;
  }

  return 0;
}