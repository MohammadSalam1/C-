#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers;
    int input;

    cout << "Ange heltal mellan -10 och 10 (avsluta med 99):" << endl;

    // Steg 2: Läs in tal
    while (true) {
        cin >> input;
        if (input == 99) break;

        if (input >= -10 && input <= 10) {
            numbers.push_back(input);
        } else {
            cout << "Talet måste vara mellan -10 och 10. Försök igen." << endl;
        }
    }

    // Steg 3: Sortera listan
    numbers.sort();

    // Steg 4: Ta bort alla nollor
    numbers.remove(0);

    // Steg 5: Skriv ut listan
    cout << "Sorterad sekvens utan nollor:" << endl;
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
