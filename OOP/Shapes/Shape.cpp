#include "Shape.h"
#include <string>
using namespace std;

Shape::Shape(string colour, string name) : colour(colour), name(name) {}

Circle::Circle(string n, string c, int r) : Shape(c, n), radius(r) {}
Rectangle::Rectangle(string n, string c, int h, int w) : Shape(c, n), height(h), width(w) {}
Triangle::Triangle(string n, string c, int s1, int s2, int b) : Shape(c, n), side1(s1), side2(s2), base(b) {}

void Circle::draw() const {

    cout << "drawing " << colour << " circle named " << name << " with radius " << radius << endl;

}

void Rectangle::draw() const {

    cout << "drawing " << colour << " rectangle named " << name << " with height and width " << height << width << endl;

}

void Triangle::draw() const {

    cout << "drawing " << colour << " with the colour " << name << " With sides and base "
    << side1 << ", " << side2 << ", " << base << endl;

}
