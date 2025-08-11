#include "library_system.h"
using namespace std;

book::book() = default;

void book::add_book(const book_information& new_book) {

    books.push_back(new_book);

}

bool book::borrowed_book(const string& title) {

    for (book_information& current_book : books) {

        if (current_book.get_title() == title) {

            return current_book.borrowed_book();
        }
    }
    return false;
}

void book::return_book(const string& title) {

    for (book_information& current_book : books) {

        if (current_book.get_title() == title) {

            current_book.return_book();
            return;
        }
    }

}

int book::available_books() const {

    int count = 0;
    for (const book_information& current_book : books) {
        if (current_book.is_available()) {
            count++;
        }
    }
    return count;

}

bool book_information::borrowed_book() {

    if (book_availability) {
        book_availability = false;
        return true;
    }
    return false;

}

void book_information::return_book() {

    book_availability = true;

}

bool book_information::is_available() const {

    return book_availability;

}

string book_information::get_title() const {

    return title;

}