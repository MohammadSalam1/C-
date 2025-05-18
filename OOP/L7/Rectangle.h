#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"

class Rectangle {

public:

    Rectangle(Point tl, Point br);

    double getWidth() const;
    double getHeight() const;
    double getArea() const;

private:
    Point topLeft;
    Point bottomRight;

};



#endif //RECTANGLE_H
