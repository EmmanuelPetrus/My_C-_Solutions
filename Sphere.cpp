#include "Sphere.h"
Sphere::Sphere(float rad) : Circle(rad) {}
float Sphere::getSurface()
{
    return (2 * Circle::getRad() * Circle::cirPeri());
}
float Sphere::getVolume()
{
    return (4 / 3 * (Circle::getRad() * Circle::cirArea()));
}