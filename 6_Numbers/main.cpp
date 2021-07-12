#include<iostream>;
//math library
#include<cmath>;

using namespace std;

int main()
{
  //to use a number just type it in
  cout << 40 << endl;

  //math operations
  //add
  cout << 5 + 7 << endl;
  //subtract
  cout << 5 - 2 << endl;
  //multiply
  cout << 5 * 2 << endl;
  //divide
  cout << 4 / 2 << endl;
  //modulo
  cout << 5 % 2 << endl;
  //order of operations
  cout << (5 + 7) * 2 << endl;

  // number variables
  // int is a whole number
  int wnum = 5;
  // double is a floating point number; can be longer than a float
  double dnum = 5.5;
  cout << wnum << endl;
  cout << dnum << endl;

  //++ to increment by one
  cout << wnum++ << endl;
  //-- to decrement by one
  cout << dnum-- << endl;
  // += to set the variable to the result of the operation
  wnum += 40;
  cout << wnum << endl;

  // pay attention to types when using numbers
  // returns 3 because both inputs are integers
  cout << 10 / 3 << endl;
  // returns 3.3333 because one input is a double
  cout << 10 / 3.0 << endl;

  // some common math functions
  // 5 to the power of 2
  cout << pow(5, 2) << endl;
  // square root of 25
  cout << sqrt(25) << endl;
  // rounds a number to the nearest integer
  cout << round(5.5) << endl;
  // always rounds up
  cout << ceil(5.1) << endl;
  // always rounds down
  cout << floor(5.7) << endl;
  // returns the largest of 2 numbers
  cout << fmax(5, 7) << endl;
 // returns the smallest of 2 numbers
  cout << fmin(5, 7) << endl;

  return 0;

}
