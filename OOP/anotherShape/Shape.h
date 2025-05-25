#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <iostream>
#include <cmath>

class Shape {
public:
    Shape(std::string name);
    virtual double area() = 0;
    virtual double printInfo() = 0;
    virtual ~Shape();
protected:
    std::string name;
};

class Circle : public Shape {
public:
    Circle(std::string name, int radius);
    double area() override{
        return M_PI * radius * radius;
    }
    double printInfo() override{
        std::cout << "Circle: " << name << " has area of: " << area() << std::endl;
        return area();
    }
protected:
    int radius;
};
class Rectangle : public Shape {
public:
    Rectangle(std::string name, int width, int height);
    double area() override{
        return width * height;
    }
    double printInfo() override{
        std::cout << "Rectangle: " << name << " has area of: " << area() << std::endl;
        return area();
    }

protected:
    int width, height;
};
#endif //SHAPE_H
