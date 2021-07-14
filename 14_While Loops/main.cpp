#include<iostream>

using namespace std;

int main()
{

  int index = 1;

  // a while loop will execute a block of code while a condition is true
  // the condition is contained in () immediately after the while keyword
  // the block of code is contained in {}
  // if the condition is initially false, the loop will not execute
  while(index <= 5) {
    cout << "index = " << index << endl;
    index++;
  }

  // a do-while loop will execute a block of code while a condition is true
  // do while loops are similar to while loops, but the condition is checked
  // after the loop has completed
  // if the condition is initially false, the loop will execute once
  do{
    cout << "index = " << index << endl;
    index--;
  }while(index > 0);

  return 0;

}