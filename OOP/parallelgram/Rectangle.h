#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Parallelgram.h"

class Rectangle : public Parallelgram {
public:
    Rectangle(double s1, double s2);
    double area() const;

};



#endif //RECTANGLE_H
