#ifndef POINT_H
#define POINT_H

class Point{
public:
    Point(double xVal, double yVal); //constructor
    double distance(const Point& other) const; //calculates distance


private:
    double x, y;

};


#endif //POINT_H
