#ifndef SMARTLOCKER_H
#define SMARTLOCKER_H
#include <string>
#include <vector>



class SmartLocker {
public:
	SmartLocker(int max_capacity);

	// takes the item's name and insert it in an empty bracket.
	// if bracket is full it returns false, otherwise it returns true
	bool store(std::string item_name);

	// this checks if the item exists and returns true before withdrawing it
	// if the item does not exist returns false
	bool retrieve(std::string item_name);

	// should check if item is in locker
	// returns true if it is, and false if it is not.
	bool isStored(std::string item_name) const;

	int availableSlots() const;

private:
	// stores list of the items entered by customer
	std::vector<std::string> items;

	// the amount of brackets that is full in the smartlocker
	int capacity;

};

#endif
