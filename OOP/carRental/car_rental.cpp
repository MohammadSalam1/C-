#include "car_rental.h"
using namespace std;

bool car::rent_out() {
    // to check if the car is available
    if (available) {
        // available is initially set to true
        available = false;
        return true;

    }
    // if car is not available don't return a car
    return false;
}

void car::return_car() {

    // marks the car as available, again.
    available = true;
}

bool car::is_available() const{

    return available;
}

std::string car::get_registration() const {

    // looks for car register number and prints it out
    return register_number;
}

void car_rental::add_car(const car& new_car) {

    // puts in container whatever new car
    // customer writes in
    cars.push_back(new_car);
}

car_rental::car_rental() = default;

bool car_rental::rent_car(const std::string& reg_number) {

    // will loop (cars not index)
    for (car& current_car : cars) {
        // if the entered register is equal to one of the reg numbers stored
        if (current_car.get_registration() == reg_number) {
            // return the car as true for rent out
            return current_car.rent_out();

        }
    }
    // otherwise return it as false and cannot be rented
    return false;
}

void car_rental::return_car(const std::string& registration_number) {

    // loops in cars container
    for (car& current_car : cars) {
        // checks to see if car is already in container
        if (current_car.get_registration() == registration_number) {
            // if car is not in the container then add it
            current_car.return_car();
            return;
        }
    }
}

int car_rental::available_cars() const {

    // initiate car count to be 0
    int count = 0;
    for (const car& current_car : cars) {
        // this will check available "current" cars
        // then increase the count by that amount
        if (current_car.is_available()) {

            count++;
        }
    }
    // will return the count of cars we have in the container
    return count;
}