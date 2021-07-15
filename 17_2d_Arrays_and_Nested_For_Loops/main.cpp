#include <iostream>

using namespace std;

int main()
{

  // A two dimensional array had two indexes:
  // in this example the first index is the row and the second is the column
  int numberGrid[3][2] = {
      {1, 2},
      {3, 4},
      {5, 6}};

  // To get a value from a two dimensional array we use the following syntax:
  cout << numberGrid[0][1] << endl;
  cout << numberGrid[2][0] << endl;

  // To print the whole array we will need to use a nested for loop
  // A nested for loop is one that is inside another for loop
  // This one loops through the rows of the array
  for (int i = 0; i < 3; i++)
  {
    // This one loops through the columns of the rows
    for (int j = 0; j < 2; j++)
    {
      // This will print the values of the array
      cout << numberGrid[i][j] << " ";
    }
    // This will print a new line after each row
    cout << endl;
  }

  return 0;
}