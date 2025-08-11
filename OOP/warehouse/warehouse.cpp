#include "warehouse.h"

using namespace std;

warehouse::warehouse() = default;

void warehouse::add_item(int new_item) {

    if (new_item > 0) {

        storage += new_item;
    }
}

bool warehouse::remove_item(int amount) {

    if (amount <= storage) {

        storage -= amount;
        return true;
    }

    return false;
}

int warehouse::get_stock() {

    return storage;

}
