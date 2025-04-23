//Exercise 4: Pointer Application

#include <iostream>

using namespace std;

int main() {


    int x = 7;
    int* ptr = &x;

    *ptr *=  3;


    cout << *ptr << endl;


    return 0;
}
