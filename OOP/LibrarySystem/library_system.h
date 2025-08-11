#ifndef LIBRARYSYSTEM_LIBRARY_SYSTEM_H
#define LIBRARYSYSTEM_LIBRARY_SYSTEM_H
#include <string>
#include <vector>

// to describe the books to be entered/withdrawn
class book_information {
public:
    // to be able to call the constructor
    // and to allow a search using title and author
    book_information(const std::string& book_title, const std::string& book_author)
        : title(book_title), author(book_author), book_availability(true) {}

    // if the book is borrowed return true
    // if the book in the library (not borrowed) return false
    bool borrowed_book();

    // show the book as available
    void return_book();

    // shows book as available as well
    bool is_available() const;

    // will return the title of the book when seeked
    std::string get_title() const;

private:
    // these information only needs to be known by
    // the system
    std::string title;

    std::string author;

    bool book_availability = true;
};


// what needs to be done to use the books
class book {
public:

    book();

    // method to add books into our container
    void add_book(const book_information& new_book);

    // will compare title inserted with the collection
    // if they match, will return true, otherwise false
    bool borrowed_book(const std::string& title);

    // will check if book is borrowed/not in
    // will allow return to the container and return true, otherwise false
    void return_book(const std::string& title);

    // will check/list count of available books in our library
    int available_books() const;

private:
    // this will be the container for the books
    std::vector<book_information> books;
};

#endif //LIBRARYSYSTEM_LIBRARY_SYSTEM_H
