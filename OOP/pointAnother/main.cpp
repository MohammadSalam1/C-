#include <iostream>
#include "Point.h"
#include "Point.cpp"

using namespace std;

int main(){

    Point p1(1, 2);
    Point p2(3, 4);

    Point p3 = p1 + p2;

    cout << p3 << endl;


    return 0;

}