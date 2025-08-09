#ifndef CARRENTAL_CAR_RENTAL_H
#define CARRENTAL_CAR_RENTAL_H
#include <string>
#include <vector>

class car {
public:

    // reg_number is short for registration number
    // this is the constructor
    car(std::string reg_number, std::string model) {

        register_number = reg_number ; car_model = model;

    }

    // this will check if a car is available
    // if yes it will return true and able to rent out
    // if no it will return false and unable to rent
    bool rent_out();

    // will take a car back after rented
    // will add it back to the container (allows duplicate)
    // will mark a car ready to be rented
    void return_car();

    // look for car in vector
    // if car is in then it's available for rent, otherwise not
    bool is_available() const;

    // this will return register number for the required car
    std::string get_registration() const;

private:

    // ALL cars must have a register number and a model.

    // this identifies the car via its license number
    std::string register_number;

    // this identifies the car via its model
    std::string car_model;

    // defaulting for a car to be available for rent
    bool available = true;

};

class car_rental {
public:

    // this constructor doesn't take any parameters
    car_rental();

    // method to add cars to our container to be used later
    void add_car(const car&);

    // if car register number is available it will allow car rental and return true
    // if car is not available it will return false
    bool rent_car(const std::string& reg_number);

    // will mark a car available once the register number is back in the container
    void return_car(const std::string& registration_number);

    // will list the amount (number) of cars that are
    // available to rent
    int available_cars() const;

private:

    // container to save the cars we add
    std::vector<car> cars;
};


#endif //CARRENTAL_CAR_RENTAL_H