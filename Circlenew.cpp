#include "Circlenew.h"

Circle::Circle(float rad) : radius(rad) {}
Circle::~Circle() {}
float Circle::cirPeri()
{
    return (2 * PI * radius);
}
float Circle::cirArea()
{
    return (PI * radius * radius);
}
float Circle::getRad()
{
    return radius;
}