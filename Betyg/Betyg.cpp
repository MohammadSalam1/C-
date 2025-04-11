#include <iostream>
using namespace std;

int main()
{
    int grades[] = {13, 19, 20, 24, 6, 18, 18, 15, 26, 10, 17};
    int countU = 0, count3 = 0, count4 = 0, count5 = 0;

    for (int i = 0; i < 11; i++) {
        if (grades[i] >= 25) {
            count5++;

        } else if (grades[i] >= 20) {
            count4++;

        } else if (grades[i] >= 15) {
            count3++;

        } else {
            countU++;
        }
    }

    cout << "U: " << countU << endl;

    cout << "3: " << count3 << endl;

    cout << "4: " << count4 << endl;

    cout << "5: " << count5 << endl;

    return 0;
}