#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <iostream>

class Vehicle {
public:

    Vehicle(std::string name, int year);

    void displayInfo(){
        std::cout << "Car brand: " << name << " was made in " << year << std::endl;

    }

protected:

    std::string name;
    int year;

};


class Door : public Vehicle {
public:

    Door(std::string name, int year, int numberOfDoors);

    void displayInfo(){
        std::cout << name << " has " << numberOfDoors << " doors. " << std::endl;

    }


protected:
    int numberOfDoors;
};


#endif //VEHICLE_H
