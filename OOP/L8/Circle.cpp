#include "Circle.h"
#include <cmath>

Circle::Circle(Point c, double r) : center(c), radius(r) {}


double Circle::getRadius() const {

    return radius;

}

double Circle::getArea() const {

    return (M_PI * radius * radius);

}

double Circle::getCircumference() const {

    return (2 * M_PI * radius);

}