#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<double> scaleScores(const vector<int>& scores){

    vector<double> newScores;

    for (int s : scores) {

        double scaled = static_cast<double>(s) / 100 * 10;

        newScores.push_back(scaled);

    }

    return newScores;
}

int main() {
    vector<int> scores;
    int input;

    while (true) {
        cout << "Enter a score (0 - 100) [to exit press -1]: ";
        cin >> input;
        if (input == -1) break;
        scores.push_back(input);
    }

    vector<double> result = scaleScores(scores);

    cout << "Scaled scores: ";
    for (double d : result) {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}
