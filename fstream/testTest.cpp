#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct person{
  string name;
  string favouriteColour;
  int age;
};

int main(){
  person myPerson;

  cout << "What is your name: " << endl;
  getline(cin, myPerson.name);

  cout << "What is your favourite colour: " << endl;
  getline(cin, myPerson.favouriteColour);

  cout << "What is your age: " << endl;
  cin >> myPerson.age;

  ofstream file("user.txt");
  file << "Name: " << myPerson.name << endl;
  file << "Favorite Color: " << myPerson.favouriteColour << endl;
  file << "Age: " << myPerson.age << endl;
  file.close();

  ifstream meme("user.txt");
  string line;

  while (getline(meme, line)){
    cout << line << endl;
  }
  meme.close();

  ifstream lolo("user.txt");
  if (!lolo.is_open()) {
    cout << "Failed to open file." << endl;
    return 1;
  }

  return 0;
}