#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int input;

    cout << "Enter positive integers, one on each line. Terminate the input by entering -1:" << endl;

    // Step 2: Read inputs into the vector
    while (true) {
        cin >> input;
        if (input == -1) break;
        if (input > 0) {
            numbers.push_back(input);
        }
    }

    // Step 3: Calculate the average
    double sum = 0;
    for (int num : numbers) {
        sum += num;
    }

    if (numbers.empty()) {
        cout << "No numbers were entered." << endl;
        return 0;
    }

    double average = sum / numbers.size();

    // Step 4: Print numbers greater than average
    cout << "Above average:";
    for (int num : numbers) {
        if (num > average) {
            cout << " " << num;
        }
    }
    cout << endl;

    return 0;
}
