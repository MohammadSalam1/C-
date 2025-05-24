    #include <iostream>
    #include "Point.cpp"
    #include "Point.h"

    using namespace std;

    int main(){

        Point p1(1, 2), p2(3, 4);

        Point sum = p1 + p2;
        Point diff = p1 - p2;
        Point scaled = p1 * 3;

        cout << "p1 + p2 = " << sum << endl;
        cout << "p1 - p2 = " << diff << endl;
        cout << "p1 * 3 = " << scaled << endl;

        Point a(1, 2), b(1, 2), c(5, 6);
        cout << "a == b? " << (a == b ? "yes" : "no") << endl;
        cout << "a == c? " << (a == c ? "yes" : "no") << endl;


        return 0;

    }