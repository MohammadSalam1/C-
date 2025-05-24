#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
public:

    Point operator+(const Point& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Point& p);

    Point(double xValue, double yValue);


private:

    double x, y;

};



#endif //POINT_H
