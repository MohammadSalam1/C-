#include <iostream>
#include "vending_machine.h"
#include "vending_machine.cpp"
using namespace std;

int main() {

    vending_machine vm;
    vm.add_product(product("Cola", 5, 20.0));
    vm.add_product(product("Chips", 3, 15.0));

    double cost = 0.0;

    bool ok1 = vm.buy("Cola", 2, cost);
    cout << "K\u00f6p 2 Cola: " << ok1 << ", kostnad: " << cost << endl;
    cout << "Totalt i lager: " << vm.total_items_in_stock() << endl;

    vm.restock_product("Chips", 2);
    bool ok2 = vm.buy("Chips", 4, cost);
    cout << "K\u00f6p 4 Chips: " << ok2 << ", kostnad: " << cost << endl;
    cout << "Totalt i lager: " << vm.total_items_in_stock() << endl;

    return 0;
}
