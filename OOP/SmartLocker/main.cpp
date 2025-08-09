#include <iostream>
#include "SmartLocker.h"
#include "SmartLocker.cpp"
using namespace std;


int main(){

    SmartLocker locker(3);
	locker.store("Laptop");
	locker.store("Bok");

	bool success = locker.store("Telefon");
	bool failed = locker.store("Surfplatta");

	cout << "Fanns 'Bok' i	skåpet? " << locker.isStored("Bok") << endl;

	locker.retrieve("Bok");
	cout << "Lediga fack: " << locker.availableSlots() << endl;

    return 0;
}