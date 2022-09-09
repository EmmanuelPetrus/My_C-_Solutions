#ifndef CIRCLE_H
#define CIRCLE_H
const float PI = 3.14;
#include <iostream>
using namespace std;
class Circle
{
private:
    float radius;

public:
    Circle(float radius);
    ~Circle();
    float getRad();
    float cirArea();
    float cirPeri();
};

#endif