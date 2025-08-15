#include "vending_machine.h"
using namespace std;


product::product(std::string prod_name, int stock_count, double prod_price) {

    name = prod_name;
    stock = stock_count;
    price = prod_price;
}

bool product::restock(int amount) {

    if (amount > 0) {

        stock += amount;
        return true;
    }

    return false;
}

bool product::purchase(int amount) {

    if (amount > 0 && amount <= stock) {

        stock -= amount;
        return true;
    }

    return false;
}

int product::get_stock() const {

    return stock;
}

double product::get_price() const {

    return price;
}

string product::get_prod_name() const {

    return name;
}


vending_machine::vending_machine(){}

void vending_machine::add_product(const product& new_product) {

    products.push_back(new_product);
}

bool vending_machine::buy(const string& name, int amount, double& total_cost) {

    for (product& item : products) {

        if (item.get_prod_name() == name) {

            if (item.purchase(amount)) {

                total_cost = item.get_price() * amount;
                return true;
            }

            return false;
        }
    }

    return false;
}

bool vending_machine::restock_product(const std::string& name, int amount) {

    for (product& item : products) {

        if (item.get_prod_name() == name) {

            return item.restock(amount);
        }
    }

    return false;
}

int vending_machine::total_items_in_stock() const{

    int total = 0;

    for (product item : products) {

        total += item.get_stock();
    }

    return total;
}
