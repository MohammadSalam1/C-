#include <iostream>
#include "Shape.h"
#include "Shape.cpp"
#include <vector>

using namespace std;

int main(){

    vector<Shape*> shape;

    shape.push_back(new Circle("C1", "red", 20));
    shape.push_back(new Rectangle("R1", "blue", 20, 21));
    shape.push_back(new Triangle("T1", "yellow", 20, 21, 22));

    for(Shape* s : shape){

        s->draw();

    }

    for(Shape* s : shape){

        delete s;

    }

    return 0;
}