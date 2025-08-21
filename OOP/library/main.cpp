#include <iostream>
#include <string>
#include <vector>

class book {
public:

    book(std::string title, std::string author)
    : title(title), author(author), is_borrowed(false) {}

    bool borrow() {

        if (!is_borrowed) {

            is_borrowed = true;
            return true;
        }
        return false;
    }

    void return_book() {

        is_borrowed = false;
    }

    std::string get_title() const {

        return title;
    }

    std::string get_author() const {

        return author;
    }

    bool borrowed_status() const {

        return is_borrowed;
    }


private:

    // identify a book using its title
    std::string title;

    // identify a book using the author
    std::string author;

    // mark book as borrowed if it's not in collection
    bool is_borrowed;

};


class member {
public:

    member(std::string name, int membership_number) : name(name), membership_number(membership_number) {}

    void borrow_book(const std::string& new_book) {

        borrowed_books.push_back(new_book);
    }

    void return_book(const std::string& book_title) {

        for (auto it = borrowed_books.begin(); it != borrowed_books.end(); ++it) {

            if (*it == book_title) {

                borrowed_books.erase(it);
                return;
            }
        }
    }

    int get_id() const {

        return membership_number;
    }

    std::string get_name() const {

        return name;
    }

    void list_borrowed() const {

        std::cout << name << " have borrowed: ";
        for (const auto& b : borrowed_books) {

            std:: cout << b << ", ";
        }

        std::cout << std::endl;
    }



private:

    // identify member using name
    std::string name;

    // identify member using membership number
    int membership_number;

    // container for borrowed books
    std::vector<std::string> borrowed_books;


};


class library {
public:

    library() = default;

    void add_book(const book& new_book) {

        books.push_back(new_book);
    }


    void add_member(const member& new_member) {

        members.push_back(new_member);
    }


    // take a book outside the library for a member
    bool lend_book(const std::string& title, int member_id) {

        for (book& b : books) {

            if (b.get_title() == title && !b.borrowed_status()) {

                for (member& m : members) {

                    if (m.get_id() == member_id) {

                        if (b.borrow()) {
                            m.borrow_book(title);
                            return true;
                        }
                    }
                }

            }
        }
        return false;
    }


    // return a book to library using title and membership id
    bool return_book(const std::string& title, int member_id) {

        for (book& b : books) {

            if (b.get_title() == title && b.borrowed_status()) {

                for (member& m : members) {

                    if (m.get_id() == member_id) {

                        b.return_book();
                        m.return_book(title);
                        return true;
                    }
                }
            }
        }

        return false;
    }


private:

    std::vector<book> books;

    std::vector<member> members;


};


int main() {

    library lib;

    lib.add_book(book("1984", "George Orwell"));
    lib.add_book(book("Sagan om ringen", "J.R.R. Tolkien"));

    lib.add_member(member("Anna", 1));
    lib.add_member(member("Erik", 2));

    // Anna lånar en bok
    if (lib.lend_book("1984", 1)) {
        std::cout << "Anna borrowed 1984\n";
    }

    // Erik försöker låna samma bok
    if (!lib.lend_book("1984", 2)) {
        std::cout << "Erik could not borrow 1984 (already borrowed)\n";
    }

    // Lämna tillbaka boken
    if (lib.return_book("1984", 1)) {
        std::cout << "Anna returned 1984\n";
    }

    // Testa att låna igen (nu ska det gå)
    if (lib.lend_book("1984", 2)) {
        std::cout << "Erik borrowed 1984\n";
    }

    return 0;
}