#include <iostream>
#include <string>
using namespace std;

int main() {

  //getline to avoid any space issues
  string firstname, lastname;
  cout << "Enter your first name: ";
  getline(cin, firstname);
  cout << "Enter your last name: ";
  getline(cin, lastname);

  //combines first and last name
  string fullname = firstname + " " + lastname;
  cout << "hello " << fullname << endl;

  cout << endl;

  string quote;
  cout << "What is your favourite quote? " << endl;
  getline (cin, quote);
  cout << quote << endl;
  //to count how many char in the quote
  cout << "Your quote has " << quote.length() << " characters." << endl;

  //prints out each letter on a line independently
  for (int i = 0; i < quote.length(); i++) {
    cout << quote[i] << endl;
  }


  return 0;
}