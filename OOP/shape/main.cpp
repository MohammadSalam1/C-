#include <iostream>
#include "Shape.h"
#include "Shape.cpp"

using namespace std;

int main(){

    Shape* s1 = new Circle("C1", 3.0);
    Shape* s2 = new Rectangle("R1", 4.0, 5.0);

    s1->printInfo();  // should call Circle::printInfo()
    s2->printInfo();  // should call Rectangle::printInfo()

    delete s1;
    delete s2;

    return 0;

}