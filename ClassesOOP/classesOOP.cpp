#include <stdio.h>
#include <iostream>
using namespace std;


//define class
class person {
  private: //these variables are hidden from outside the class
    string name;
    int age;
  public: //these can be accessed/called from outside
    //constructor: a special function that runs when the object is created
    person(string n, int a){
      name = n;
      age = a;
    }
  //public method (function inside class)
    void introduce(){ //method that prints info about the person
      cout << "Hi, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {

  person p1("Mohamad", 20);
  p1.introduce();

  return 0;
}