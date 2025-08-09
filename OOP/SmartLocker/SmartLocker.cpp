#include "SmartLocker.h"
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//constructor
SmartLocker::SmartLocker(int max_capacity) : capacity(max_capacity){}

//takes the item's name and insert it in an empty bracket.
//if bracket is full it returns false, otherwise it returns true.
bool SmartLocker::store(string item_name) {

    for(const string& existing_item : items) {
        if(existing_item == item_name) {
            return false;  // Item already stored
        }
    }

    // Check if locker is full
    if(items.size() >= capacity) {
        return false;  // No space available
    }

    // Store the item
    items.push_back(item_name);
    return true;  // Successfully stored
}

// checks if the item is within the locker
// if its in then it subtracts it (withdraw the item)
// if not, it just returns false.
bool SmartLocker::retrieve(string item_name) {

    vector<string>::iterator it = find(items.begin(), items.end(), item_name);

    if(it != items.end()){

        // if item is found, remove it.
        items.erase(it);
        return true;

    }

    return false;
}

// checks if the item we are recalling is within the
// items that are stored, if it's in and exists then returns true
// if it is not then returns false.
bool SmartLocker::isStored(string item_name) const {

    // in vector created look for the item
    // if the item is found return true
    // if item doesn't exist return false.
    for(const string& existing_item : items) {

        if (existing_item == item_name) {

            return true;

        }
    }

    return false;
}

//
int SmartLocker::availableSlots() const {

    return capacity - items.size();

}

