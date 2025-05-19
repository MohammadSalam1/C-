#include "Point.h"


Point::Point(const double xValue, double yValue) : x(xValue), y(yValue) {}

Point Point::operator+(const Point& other) const {

    return Point(x + other.x, y + other.y);

}

Point Point::operator-(const Point& other) const {

    return Point(x -other.x, y - other.y);

}

Point Point::operator*(double other) const {

    return Point(x * other, y * other);

}

std::ostream& operator<<(std::ostream& os, const Point& p) {

    os << "(" << p.x << ", " << p.y << ")";
    return os;

}

bool Point::operator==(const Point& other) const {

    return x == other.x && y == other.y;

}