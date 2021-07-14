#include<iostream>
#include<cmath>

using namespace std;

int getMax(int num1, int num2, int num3) {
  int result;

  if (num1 >= num2 && num1 >= num3) {
    result = num1;
  } else if (num2 >= num1 && num2 >= num3) {
    result = num2;
  } else {
    result = num3;
  }

  return result;

}

int main() 
{

  // all instances of this function should print 3
  cout << getMax(1, 2, 3) << endl;
  cout << getMax(3, 2, 1) << endl;
  cout << getMax(3, 3, 3) << endl;
  cout << getMax(2, 3, 2) << endl;

  return 0;

}