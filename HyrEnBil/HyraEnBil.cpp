#include <iostream>
#include <string>
using namespace std;

int main()
{
    int dagar;
    int km;
    int Totalkostnad = 0;
    cout << "enter a day count: " << endl;
    cin >> dagar;
    cout << "enter a km count: " << endl;
    cin >> km;

    int kostnad_per_dag = dagar * 395;
    int allowed_distance_price = dagar * 100;
    int extra_km = km -  (dagar * 100);
    Totalkostnad = kostnad_per_dag;

    if (extra_km > 0) {
        Totalkostnad += extra_km * 2;
    }
    cout << "Totalkostnad: " << Totalkostnad  << " kr";

    return 0;
}