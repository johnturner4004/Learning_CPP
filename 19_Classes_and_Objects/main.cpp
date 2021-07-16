#include<iostream>

using namespace std;

// Class is the bluprint for a custom data type
class Book {
  public:
    string title;
    string author;
    int pages;
};

int main()
{

  // An object is an instance of a class
  Book book1;
  book1.title = "Halo: The Fall of Reach";
  book1.author = "Eric Nylund";
  book1.pages = 464;

  Book book2;
  book2.title = "Halo: The Flood";
  book2.author = "William C. Dietz";
  book2.pages = 352;

  Book book3;
  book3.title = "Halo: First Strike";
  book3.author = "Eric Nylund";
  book3.pages = 480;

  // To access an attribute of an object use the object name followed by a '.' then the attribute name
  cout << book1.title << endl;
  cout << book1.author << endl;
  cout << book1.pages << endl;

  // The value of an attribute can be changed
  book3.pages = 416;
  cout << book2.title << endl;
  cout << book2.author << endl;
  cout << book2.pages << endl;

  cout << book3.title << endl;
  cout << book3.author << endl;
  cout << book3.pages << endl;

  return 0;

}