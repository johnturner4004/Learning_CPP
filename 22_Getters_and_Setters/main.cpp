#include<iostream>

using namespace std;

class Movie {
  // private can be accessed only by the class
  private:
    string rating;


  public:
    string title;
    string director;
    Movie (string aTitle, string aDirector, string aRating) {
        title = aTitle;
        director = aDirector; 
        setRating(aRating);
    }

    void setRating(string aRating) {
        if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR" || aRating == "Unrated") {
          rating = aRating;
        } else {
          rating = "NR";
        }
    };

    string getRating() {
      return rating;
    };
};

int main()
{

  Movie avengers("Avengers", "Joss Whedon", "PG-13");

  // cout << avengers.rating << endl;
  // cannot access rating anymore because it is private

  // avengers.rating = "Dog";
  // cannot directly access rating anymore, must use setRating() to change it

  avengers.setRating("Dog");
  // cannot set rating to invalid rating anymore because of setter

  // to get rating value now a getter must be used
  cout << avengers.getRating() << endl;
  // returns "NR" because "Dog" was an invalid rating

  return 0;

}