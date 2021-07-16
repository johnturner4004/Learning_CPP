#include<iostream>

using namespace std;

// Class is the bluprint for a custom data type
class Book {
  public:
    string title;
    string author;
    int pages;
    // Constructor function
    // Runs when a new object is created
    Book(string aTitle, string aAuthor, int aPages) {
      cout << "Creating " << aTitle << endl;
      title = aTitle;
      author = aAuthor;
      pages = aPages;
    }
    // Can have more than one constructor
    // Can use them to have default values
    Book() {
      title = "no title";
      author = "no author";
      pages = 0;
    }
};

int main()
{

  // A constructor can be used to initialize the object
  Book book1("Hale: The Fall of Reach", "Eric Nylund", 464);

  Book book2("Halo: The Flood", "William C. Dietz", 416);

  Book book3("Halo: First Strike", "Eric Nylund", 480);

  cout << book1.title << endl;
  cout << book1.author << endl;
  cout << book1.pages << endl;

  cout << book2.title << endl;
  cout << book2.author << endl;
  cout << book2.pages << endl;

  cout << book3.title << endl;
  cout << book3.author << endl;
  cout << book3.pages << endl;

  return 0;

}