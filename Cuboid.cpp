#include "Cuboid.h"

Cuboid::Cuboid(int len, int wid, int he) : Rectangle(len, wid), height(he)
{
}

Cuboid::~Cuboid()
{
}

int Cuboid::areaCube()
{
    return (2 * (Rectangle::area() + (Rectangle::getlen() * height) + (Rectangle::getwid() * height)));
}

int Cuboid::volCube()
{
    return (height * Rectangle::getlen() * Rectangle::getwid());
}