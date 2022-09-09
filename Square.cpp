#include "Square.h"

Square::Square(int m) : side(m) {}
Cube::Cube(int m) : Square(m) {}
int Square::getSide()
{
    return side;
}
int Square::getArea()
{
    return (side * side);
}
int Square::getPeri()
{
    return (2 * side);
}
int Cube::getArea()
{
    int cu_area = 6 * Square::getArea();
    return cu_area;
}
int Cube::getVol()
{
    return (getSide() * Square::getArea());
}
Square::~Square(){}
Cube::~Cube(){}