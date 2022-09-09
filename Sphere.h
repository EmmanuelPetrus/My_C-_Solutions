#ifndef SPHERE_H
#include "Circlenew.h"
#define SPHERE_H
class Sphere : public Circle
{
public:
    Sphere(float radius);
    ~Sphere();
    float getSurface();
    float getVolume();
};

#endif