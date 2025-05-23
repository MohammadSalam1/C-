#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <iostream>

class Shape {
public:
    Shape(std::string name);
    virtual double area() const = 0;
    virtual void printInfo() const = 0;
protected:
    std::string name;
};

class Circle : public Shape{
public:
    Circle(std::string name, double radius);
    double area() const override;
    void printInfo() const override;
protected:
    double radius;
};

class Rectangle : public Shape{
public:
    Rectangle(std::string name, double width, double height);
    double area() const override;
    void printInfo() const override;
protected:
    double width, height;
};

#endif //SHAPE_H
