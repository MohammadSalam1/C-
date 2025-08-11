#include <iostream>
#include "library_system.h"
#include "library_system.cpp"

using namespace std;

int main() {

    book lib;
    lib.add_book(book_information("1984", "George Orwell"));
    lib.add_book(book_information("Sagan om ringen", "J.R.R. Tolkien"));

    bool borrowed = lib.borrowed_book("1984");
    cout << "Tillgängliga böcker: " << lib.available_books() << endl;

    lib.return_book("1984");
    cout << "Tillgängliga böcker: " << lib.available_books() << endl;


    return 0;
}