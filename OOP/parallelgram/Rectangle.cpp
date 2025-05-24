#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(double s1, double s2) : Parallelgram(s1, s2) {

    cout << "Creating a Rectangle with sides: " << s1 << " and " << s2 << endl;

}

double Rectangle::area() const {

    return side1 * side2;

}
