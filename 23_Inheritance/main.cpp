#include<iostream>

using namespace std;

// super class
class Chef {
  public:
    void makeChicken() {
      cout << "The chef makes chicken" << endl;
    }
    void makeSalad() {
      cout << "The chef makes salad" << endl;
    }
    void makeSpecialDish() {
      cout << "The chef makes bbq ribs" << endl;
    }
};

// sub class
// chef inherits from parent class
class ItalianChef : public Chef {
  public:
    void makePasta() {
      cout << "The chef makes pasta" << endl;
    }
    // can override parent function
    void makeSpecialDish() {
      cout << "The chef makes chicken parm" << endl;
    }
};

int main() 
{

  Chef chef;
  chef.makeChicken();

  ItalianChef italianChef;
  // able to call makeChicken() method from ItalianChef
  // because it is inherited from Chef
  italianChef.makeChicken();
  italianChef.makePasta();

  // chef.makePasta(); // error
  // while italian chef can use chef functions
  // chef cannot use italian chef functions

  chef.makeSpecialDish();
  italianChef.makeSpecialDish();

  return 0;

}