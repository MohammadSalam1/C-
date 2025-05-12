#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> filterShortWord(const vector<string>& word, int maxLength){

    vector<string> newWord;
    for (const string& w: word){

        if(w.length() <= maxLength){

            newWord.push_back(w);

        }

    }
    return newWord;
}


int main(){

    vector<string> words = {"apple", "bee", "sun", "elephant"};

    vector<string> results = filterShortWord(words, 5); //can change maxLength

    for(const string& w: results){

        cout << w << " ";

    }


    return 0;
}