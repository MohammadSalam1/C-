#include "Point.h"


Point::Point(const double xValue, double yValue) : x(xValue), y(yValue) {}

Point Point::operator+(const Point& other) const {

    return Point(x + other.x, y + other.y);

}

std::ostream& operator<<(std::ostream& os, const Point& p) {

    os << "(" << p.x << ", " << p.y << ")";
    return os;

}