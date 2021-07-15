#include<iostream>

using namespace std;

int power(int baseNum, int powerNum) {
  int result = 1;

  for (int i = 0; i < powerNum; i++) {
    // on first loop i = 0, result = 1, 1 * baseNum = baseNum
    // on second loop i = 1, result = baseNum * baseNum = baseNum^2
    // on third loop i = 2, result = baseNum^2 * baseNum = baseNum^3
    result *= baseNum;
  }
  return result;
}

int main()
{

  cout << power(4,2) << endl;

  return 0;
}