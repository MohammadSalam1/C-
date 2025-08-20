#include <iostream>
#include <string>
#include <vector>


class plane {
public:

    // --- declaration and implementation in one place ---

    // constructor
    plane(std::string flight_number, std::string destination, int seats, int booked = 0)
    : flight_number(flight_number), destination(destination), seats(seats), booked(booked) {}

    // books a seat in the flight,
    // if there is no spots, return false.
    bool book_seat() {

        if (booked < seats) {

            booked++;
            return true;
        }
        return false;
    };

    // returns the count of free seats left
    int free_seats() const {

        return seats - booked;
    };

    // tells the flight number
    std::string get_flight_number() const {

        return flight_number;
    };

    // tells where its headed
    std::string get_flight_destination() const {

        return destination;
    };


private:

    // identifies the flight via its number (but inserted as a text)
    std::string flight_number;

    // [just as the name] tells where the flight is headed
    std::string destination;

    // seat count on the flight
    int seats;

    // how many booked seats are there
    int booked;

};

class airport {
public:

    // adds a new plane to our airport
    void add_plane(const plane& new_plane) {

        planes.push_back(new_plane);
    };

    // uses flight_number (from class plane) to book a flight
    bool book_on_flight(const std::string& flight_number) {

        for (plane& new_plane : planes) {

            if (new_plane.get_flight_number() == flight_number) {

                return new_plane.book_seat();
            }
        }
        return false;
    };

    // checks free seats on flight (using seats from class plane)
    int total_free_seats() const {

        int total = 0;
        for (const plane& p : planes) {

            total += p.free_seats();
        }

        return total;
    };

    // lists all available flights using their number
    void list_flights() const {

        for (const plane& p : planes) {

            std::cout << "Flight " << p.get_flight_number()
          << " to " << p.get_flight_destination()
          << " | Free seats: " << p.free_seats()
          << std::endl;

        }
    };


private:

    // container to hold planes and flights
    std::vector<plane> planes;
};

int main() {
    // Create an airport
    airport arlanda;

    // Add some planes
    arlanda.add_plane(plane("SK123", "Stockholm", 180));
    arlanda.add_plane(plane("LH456", "Berlin", 150));
    arlanda.add_plane(plane("BA789", "London", 200));

    // Book some seats
    arlanda.book_on_flight("SK123");  // 1 seat booked
    arlanda.book_on_flight("SK123");  // 2 seats booked
    arlanda.book_on_flight("LH456");  // 1 seat booked

    // List flights with available seats
    std::cout << "Flights at the airport:" << std::endl;
    arlanda.list_flights();

    // Show total free seats across the airport
    std::cout << "Total free seats at the airport: "
              << arlanda.total_free_seats() << std::endl;

    return 0;

}