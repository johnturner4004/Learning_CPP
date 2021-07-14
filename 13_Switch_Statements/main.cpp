#include<iostream>

using namespace std;

string getDayOfWeek(int dayNum) {
  string dayName;

  // similar to an if-else statement
  // condition is in () and is what is being tested
  switch (dayNum) {
    // if the dayNum is 0, the following code will be executed
    case 0:
      dayName = "Sunday";
      // tells the program to break out of the switch statement
      break;
    case 1:
      dayName = "Monday";
      break;
    case 2:
      dayName = "Tuesday";
      break;
    case 3:
      dayName = "Wednesday";
      break;
    case 4:
      dayName = "Thursday";
      break;
    case 5:
      dayName = "Friday";
      break;
    case 6: 
      dayName = "Saturday";
      break;
    // the default case is executed if none of the conditions is not met
    default:
      dayName = "Invalid Day Number";
      break;

  return dayName;

  }

  return dayName;

}

int main()
{
  int dayNum;

  cout << "Enter day of the week number: ";
  cin >> dayNum;
  cout << "The day of the week is: " << getDayOfWeek(dayNum) << endl;

  return 0;

}