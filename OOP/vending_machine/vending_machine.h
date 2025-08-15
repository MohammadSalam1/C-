#ifndef VENDING_MACHINE_VENDING_MACHINE_H
#define VENDING_MACHINE_VENDING_MACHINE_H
#include <vector>
#include <string>


class product {
public:

    // constructor
    product(std::string prod_name, int stock_count, double prod_price);

    // if the amount exceeds 0 then return true
    // else return false
    bool restock(int amount);

    // decrease the amount of stock then return true
    // if not enough stock return false
    bool purchase(int amount);

    // receives how much stock is in
    int get_stock() const;

    // includes price of one stock
    double get_price() const;

    // shows the product name
    std::string get_prod_name() const;



private:

    // name of the product
    std::string name;

    // count of product in stock
    int stock;

    // how much one piece of the product costs
    double price;

};

class vending_machine {
public:

    // construct
    vending_machine();

    // adds products to vending machine
    void add_product(const product&);

    // buys the product using it's name
    // use [total_cost = price * amount] then return true if the buy happens
    // return false and keep the amount the same if buy doesn't happen
    bool buy(const std::string& name, int amount, double& total_cost);

    // self-explanatory restocks shelves of product in machine
    bool restock_product(const std::string& name, int amount);

    // returns count of all products in machine
    int total_items_in_stock() const;


private:

    // container to act as our vending machine
    std::vector<product> products;

};


#endif //VENDING_MACHINE_VENDING_MACHINE_H