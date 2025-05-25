#include "Shape.h"
#include <vector>

using namespace std;

Shape::~Shape() {}

Shape::Shape(string n) : name(n) {}

Circle::Circle(string n, int r) : Shape(n), radius(r) {}

Rectangle::Rectangle(string n, int w, int h) : Shape(n), width(w), height(h) {}


int main() {

    vector<Shape*> shapes;
    shapes.push_back(new Circle("Circly", 22));
    shapes.push_back(new Rectangle("Rectangly", 12, 12));

    Shape *c = shapes[0];
    Shape *r = shapes[1];

    c->printInfo();
    r->printInfo();

    delete shapes[0];
    delete shapes[1];


    return 0;

}