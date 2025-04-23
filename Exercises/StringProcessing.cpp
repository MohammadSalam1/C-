//Exercise 3: String Processing

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "write a full sentence: " << endl;
    string sentence;
    getline(cin, sentence);

    std::replace(sentence.begin(), sentence.end(), ' ', '_');

    cout << sentence;

    return 0;
}
