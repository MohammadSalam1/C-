//Exercise 5: Reference Function

#include <iostream>

using namespace std;

void makeNegative(int& n) {

    n = -n;

}

int main() {

    cout << "enter a number" << endl;
    int n;
    cin >> n;
    makeNegative(n);
    cout << n << endl;


    return 0;
}
