#include <iostream>
#include "Rectangle.h"
#include "Point.h"
#include "Rectangle.cpp"
#include "Point.cpp"

using namespace std;

int main(){

    Point p1(1, 2);
    Point p2(3, 4);

    Rectangle r1(p1, p2);

    cout << "Width: " << r1.getWidth() << endl;
    cout << "Height: " << r1.getHeight() << endl;
    cout << "Area: " << r1.getArea() << endl;



    return 0;
}