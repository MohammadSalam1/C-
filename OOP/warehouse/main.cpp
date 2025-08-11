#include <iostream>
#include "warehouse.h"
#include "warehouse.cpp"
using namespace std;

int main() {

    warehouse storage;
    storage.add_item(500);

    while (storage.remove_item(150)) {

        cout << "Extract 150 item \n";
    }

    cout << "Items left in storage: " << storage.get_stock() << endl;
e
    return 0;
}