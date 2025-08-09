#include <iostream>
#include "car_rental.h"
using namespace std;

int main() {

    car_rental rental;
    rental.add_car(car("ABC123", "Volvo"));
    rental.add_car(car("XYZ789", "BMW"));

    bool success = rental.rent_car("ABC123");
    cout << "Lediga bilar: " << rental.available_cars() << endl;

    rental.return_car("ABC123");
    cout << "Lediga bilar: " << rental.available_cars() << endl;


    return 0;
}