#ifndef POINT_H
#define POINT_H

class Point {

public:

    Point(double xVal, double yVal);
    double getX() const;
    double getY() const;


private:

    double x, y;

};


#endif //POINT_H