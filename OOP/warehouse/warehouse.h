#ifndef WAREHOUSE_WAREHOUSE_H
#define WAREHOUSE_WAREHOUSE_H


class warehouse {
public:

    warehouse();

    // takes item count and add it to our storage unit
    // negative numbers must be ignored
    void add_item(int new_item);

    // removes items from the storage unit
    // if item count is within scope asked for return true
    // if item count is too big then return false
    bool remove_item(int amount);

    // this will return how many items
    // is in our storage unit.
    int get_stock();


private:

    // initiating the warehouse storage to be empty
    // before adding anything in it
    int storage = 0;
};


#endif //WAREHOUSE_WAREHOUSE_H