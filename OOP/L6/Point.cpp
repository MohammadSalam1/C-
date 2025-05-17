#include "Point.h"
#include <cmath>

Point::Point(double xVal, double yVal) : x(xVal), y(yVal) {}

double Point::distance(const Point& other) const{
    return std::sqrt(
        std::pow(other.x - x, 2) + std::pow(other.y - y, 2)
    );

}