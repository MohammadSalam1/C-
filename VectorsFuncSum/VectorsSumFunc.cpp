#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;


int sumVector(const vector<int>& vec) {
    return accumulate(vec.begin(), vec.end(), 0);
}

int main() {

    vector<int> even;
    vector<int> odd;
    vector<int> merged = even;


    //loops to fill vectors
    for(int i = 2; i < 22; i+=2){

        even.push_back(i);

    }

    for(int j = 1; j < 20; j += 2){

        odd.push_back(j);

    }


    merged.insert(merged.end(), odd.begin(), odd.end());
    sort(merged.begin(), merged.end(), greater<int>());

    //printing out vectors
    cout << "Even numbers are: " << endl;
    for (int k: even){

        cout << k << " ";

    }

    cout << endl;

    cout << "odd numbers are: " << endl;
    for (int l: odd){

        cout << l << " ";

    }

    cout << endl;

    cout << "Merged vectors are: " << endl;
    for (int n: merged){

        cout << n << " ";

    }

    cout << endl;

    //sum of values
    cout << "Sum values of even numbers is: " << sumVector(even) << endl;
    cout << "Sum values of odd numbers is: " << sumVector(odd) << endl;
    cout << "Sum values of merged numbers is: " << sumVector(merged) << endl;





    return 0;
}