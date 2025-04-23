//Exercise 1, Array to Vector

#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main() {

    array<int, 3> a = {1, 2, 3};
    vector<int> v;

    for (int i = 0; i < a.size(); i++) {

    cout << a[i] << " ";
}
    cout << endl;
    for (auto i: a) {
        v.push_back(i);
        cout << i << " ";
    }
return 0;
}