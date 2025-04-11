#include <iostream>
#include <string>
using namespace std;

int main() {

  //reading more than one word
  string fullname;
  cout << "what is your fullname?" << endl;

  getline(cin, fullname); //reads full line with space
  cout << "hello " << fullname << endl;

  //this reads only the first string, if you use a space it wont work it would still only read one word

  // string name;
  // cout << "what is your name?" << endl;
  // cin >> name;
  //
  // cout << "hello " << name << endl;
  return 0;
}