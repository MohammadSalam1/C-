#include "Rectangle.h"
#include "Point.h"

Rectangle::Rectangle(Point tl, Point br) : topLeft(tl), bottomRight(br) {}

double Rectangle::getWidth() const {

    return bottomRight.getX() - topLeft.getX();

}

double Rectangle::getHeight() const {

    return bottomRight.getY() - topLeft.getY();

}

double Rectangle::getArea() const {

    return getWidth() * getHeight();

}
