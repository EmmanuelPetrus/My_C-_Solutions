#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include <cassert>
#include <cmath>
class Triangle
{
private:
    float firstSide, secondSide, thirdSide;

public:
    Triangle(float a, float b, float c);
    Triangle (const Triangle &a);
    ~Triangle();
    void getSides();
    float getPerimeter();
    void getArea();
};

#endif