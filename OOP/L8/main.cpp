#include <iostream>
#include "Circle.h"
#include "Circle.cpp"
#include "Point.h"
#include "Point.cpp"

using namespace std;

int main(){

    Point p1(1, 2);
    Circle c1(p1, 3);

    cout << "Cricumference: " << c1.getCircumference() << endl;
    cout << "Area: " << c1.getArea() << endl;


return 0;
}