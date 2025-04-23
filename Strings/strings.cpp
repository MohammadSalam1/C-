#include <iostream>
#include <string>

using namespace std;

int main(){

/*
    Operation | Example
    Create a string | string name = "Alice";
    Concatenate | string full = first + " " + last;
    Length | name.length() or .size()
    Access character | name[0]
    Modify character | name[0] = 'M';
    Compare | if (a == b)
    Get full line input | getline(cin, name);
    Substring | name.substr(0, 3)
    Find substring/char | name.find("Al") → returns index
*/

    cout << "what is your name" << endl;
    string name;

    getline(cin, name);
    cout << name << endl;


return 0;
}