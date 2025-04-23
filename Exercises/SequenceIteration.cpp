//Exercise 2: Sequence Iteration

#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {

    list<string> words = {"C++", "is", "awesome"};

    auto it = words.begin(); //pointer att c++
    ++it; //pointer jumps to is

    words.insert(it, "definitly"); //inserts word between c++ and is

    for (string s: words) {

        cout << s << " ";
    }


    return 0;
}