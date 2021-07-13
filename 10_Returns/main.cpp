#include <iostream>

using namespace std;

// Return type is the type of data the function returns
double cube(double num) {
  // tells the function where the function ends
  // gives a value back to where it was called
  return num * num * num;
  // anything after the return statement is ignored
  cout << "This will not print" << endl;
}

int main()
{

  double answer = cube(5.0);
  cout << answer << endl;

  cout << cube(5.0) << endl;

  return 0;
}