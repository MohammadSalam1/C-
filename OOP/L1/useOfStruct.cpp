#include <iostream>
#include <string>

using namespace std;

struct Book{

    string title;
    int pageCount;
    string author;

};

int main(){

    Book a;

    a.title = "to kill a mockingbird";
    a.pageCount = 281;
    a.author = "Harper Lee";

    cout << a.title << " - " << a.pageCount << " - " << a.author << endl;

    return 0;
}