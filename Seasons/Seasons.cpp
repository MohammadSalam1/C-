#include <iostream>
using namespace std;

int main()
{
    int month, day;
    cout << "Chose a month number (1 - 12): " << endl;
    cin >> month;

    cout << "chose a day (1 - 31): " << endl;
    cin >> day;

    string season;

    if ((month == 3 && day >= 21) || (month == 4) || (month == 5) || (month == 6 && day <= 21)) {
        season = "Vår";
    } else if ((month == 6 && day >= 22) || (month == 7) || (month == 8) || (month == 9 && day <= 22)) {
        season = "Sommar";
    } else if ((month == 9 && day >= 23) || (month == 10) || (month == 11) || (month == 12 && day <= 20)) {
        season = "Höst";
    } else {
        season = "Vinter";
    }

    cout << season;

    return 0;
}
    