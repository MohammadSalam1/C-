#include "Shape.h"
#include <cmath>
using namespace std;

Shape::Shape(string n) : name(n) {}
Circle::Circle(string n, double r) : Shape(n), radius(r) {}
Rectangle::Rectangle(std::string n, double w, double h) : Shape(n), width(w), height(h) {}

double Circle::area() const{
    return M_PI * radius * radius;
}

void Circle::printInfo() const {
    std::cout << "Circle '" << name << "' has area: " << area() << std::endl;
}

double Rectangle::area() const{
    return height * width;
}
void Rectangle::printInfo() const {
    std::cout << "Rectangle '" << name << "' has area: " << area() << std::endl;
}
