#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(string n, int y) : name(n), year(y) {}

Door::Door(string n, int y, int d) : Vehicle(n, y), numberOfDoors(d) {}

int main(){

    Vehicle vehicle("Toyota", 2020);
    Door door("Toyota", 2020, 4);

    vehicle.displayInfo();
    door.displayInfo();

return 0;
}