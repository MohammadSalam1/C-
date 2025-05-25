#include "CarPower.h"
#include <iostream>

using namespace std;

CarPower::CarPower(int hp, string t) : horsePower(hp), type(t) {}

void CarPower::displaySpecs() const {

    cout << "Engine has: " << horsePower << " runs on " << type << endl;

}


int main() {

    CarPower car1(235, "Bensin");

    car1.displaySpecs();


    return 0;

}