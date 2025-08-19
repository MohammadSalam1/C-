#include <iostream>
#include <string>
#include <vector>


class room {
public:

    // --- declaration ---

    // constructor to be called
    room(int number);

    // if room is available return true
    // otherwise return false
    bool book();

    // once room is empty again, mark it as available
    void free_up();

    // gets room status if available or not
    bool is_available() const;

    // gets room id or number
    int get_number() const;

private:
    // assigns each roon a number, easier to identify.
    // room id is room number
    int room_id;

    // room is initially empty and ready for use.
    bool room_available = true;

};

// --- class room implementation ---

room::room(int number) {

    room_id = number;
}

bool room::book() {

    if (room_available == true) {

        room_available = false;
        return true;
    }

    return false;
}

void room::free_up() {

    room_available = true;
}

bool room::is_available() const {

    return room_available;
}

int room::get_number() const {

    return room_id;
}

class hotel {
public:

    // --- declaration ---

    hotel() = default;

    // adds a new room by number, if room doesn't exist
    // return true, if room already exists return false
    bool add_room(const room& r);

    // book a room by its given number
    // if room is available return true (after booking)
    // if room is taken return false
    bool book_room(int room_number);

    // freeing up a room using its number
    void free_room(int room_number);

    // return count of all available rooms
    int available_rooms() const;

private:

    // container for room count
    std::vector<room> rooms;


};

// --- class hotel implementation ---

bool hotel::add_room(const room& r) {

   for (const room& current_room : rooms) {

       if (current_room.get_number() == r.get_number()) {

           return false;
       }
   }

    rooms.push_back(r);
    return true;
}

bool hotel::book_room(int room_number) {

    for (room& current_room : rooms) {

        if (current_room.get_number() == room_number) {

            return current_room.book();
        }
    }

    return false;
}

void hotel::free_room(int room_number) {

    for (room& current_room : rooms) {

        if (current_room.get_number() == room_number) {


            current_room.free_up();
            return;
        }
    }
}

int hotel::available_rooms() const {

    int room_count = 0;
    for (const room& current_room : rooms) {

        if (current_room.is_available()) {

            room_count++;
        }
    }

    return room_count;
}

int main(){

    hotel h;
    h.add_room(room(101));
    h.add_room(room(102));
    h.add_room(room(103));

    bool ok1 = h.book_room(101);
    bool ok2 = h.book_room(101); // försök boka samma igen

    std::cout << "Lediga rum: " << h.available_rooms() << std::endl;

    h.free_room(101);
    std::cout << "Lediga rum: " << h.available_rooms() << std::endl;



    return 0;
}