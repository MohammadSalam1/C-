#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <iostream>

class Shape {
public:
    Shape(std::string colour, std::string name);
    virtual void  draw() const = 0;
    virtual ~Shape() = default;

protected:

    std::string colour;
    std::string name;

};

class Circle : public Shape {
public:
    Circle(std::string name, std::string colour, int radius);

    void draw() const override;

protected:
    int radius;

};

class Rectangle : public Shape {
public:
    Rectangle(std::string name, std:: string colour, int height, int width);

    void draw() const override;

protected:

    int height, width;

};

class Triangle : public Shape {
public:
    Triangle(std::string name, std::string colour, int side1, int side2, int base);

    void draw() const override;

protected:

    int side1, side2, base;

};


#endif //SHAPE_H
