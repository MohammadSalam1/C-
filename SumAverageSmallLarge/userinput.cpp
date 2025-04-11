#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //take in numbers and show them
    int userinput [5];
    cout << "write five integers (positive whole numbers): " << endl;
    for (int i = 0; i < 5; i++){
        cout << "enter number: " << " ";
        cin >> userinput[i];
    }
    cout << "you entered: " << endl;
    for (int i = 0; i < 5; i++){
        cout << userinput[i] << " ";
    }

    cout << endl;


    //sum and average of these numbers
    int sum = 0;
    for (int i = 0; i < 5; i++){
        sum += userinput[i];
    }
    int average = static_cast<int>(sum)/5;
    cout << "sum: " << sum << endl;
    cout << "average: " << average << endl;

    cout << endl;

    //largest and smallest number
    int largest = userinput[0];
    int smallest = userinput[0];

    for (int i = 0; i < 5; i++){
        if (userinput[i] > largest){
            largest = userinput[i];
        } else if (userinput[i] < smallest){
            smallest = userinput[i];
        }

    }
    cout << "largest: " << largest << endl;
    cout << "smallest: " << smallest << endl;


    return 0;
}
