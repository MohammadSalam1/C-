#include <iostream>
#include <deque> // För deque
using namespace std;

int main() {
    int choice;
    int carNumber;
    deque<int> train; // Deklarera deque för tågvagnar

    do {
        cout << endl << "Meny:" << endl;
        cout << "1. Lägg till vagn först" << endl;
        cout << "2. Lägg till vagn sist" << endl;
        cout << "3. Skriv ut tågets vagnar" << endl;
        cout << "4. Avsluta" << endl;
        cout << "Gör ett val: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Ange vagnens nummer: ";
            cin >> carNumber;
            train.push_front(carNumber);
            break;
            case 2:
                cout << "Ange vagnens nummer: ";
            cin >> carNumber;
            train.push_back(carNumber);
            break;
            case 3:
                cout << "Tågets vagnar:";
            for (int car : train) {
                cout << " " << car;
            }
            cout << endl;
            break;
            case 4:
                break;
            default:
                cout << "Felaktigt val. Försök igen." << endl;
        }
    } while (choice != 4);

    return 0;
}
