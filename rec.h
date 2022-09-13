#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"
// Class  definition
class Rectangle : public Shape
{
private:
    double length;
    double width;
    bool isValid() const;

public:
    Rectangle(double length, double width);
    ~Rectangle();
    void print() const;
    double getArea() const;
    double getPerimeter() const;
};
#endif