#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"

class Circle {
public:

    Circle(Point center, double radius);

    double getRadius() const;
    double getArea() const;
    double getCircumference() const;

private:
    Point center;
    double radius;

};

#endif //CIRCLE_H
