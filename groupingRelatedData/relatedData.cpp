#include <iostream>
using namespace std;

struct person {
  string name;
  string favouriteColour;
  int age;
};

struct movie {
  string title;
  string director;
  int releaseYear;

};


int main() {
  person myPerson;
  movie myMovie;

  cout << "What is your fullname? " << endl;
  getline(cin, myPerson.name);

  cout << "What is your favourite colour? " << endl;
  getline(cin, myPerson.favouriteColour);

  cout << "How old are you? " << endl;
  cin >> myPerson.age;
  cin.ignore();

  cout << "What is your favourite movie?" << endl;
  getline(cin, myMovie.title);

  cout << "Who directed the movie?" << endl;
  getline(cin, myMovie.director);

  cout << "What year was the movie released? " << endl;
  cin >> myMovie.releaseYear;
  cin.ignore();

  cout << "name: " << myPerson.name << endl;
  cout << "Favourite colour: " << myPerson.favouriteColour << endl;
  cout << "age: " << myPerson.age << endl;
  cout << endl;
  cout << "Fave movie: " << myMovie.title << endl;
  cout << "Directed by: " << myMovie.director << endl;
  cout << "Released on: " << myMovie.releaseYear <<endl;

  return 0;
}