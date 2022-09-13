#include "circ.h"

// Constructor
Circle ::Circle(double r)
    : radius(r)
{
    if (!isValid())
    {
        cout << "Invalid circle!";
        assert(false);
    }
}
// Destructor
Circle ::~Circle()
{
}
// Definition of print function
void Circle ::print() const
{
    cout << "Circle of radius : " << radius << endl;
}
// Finding the area
double Circle ::getArea() const
{
    return (3.14 * radius * radius);
}
// Finding the perimeter
double Circle ::getPerimeter() const
{
    return 2 * 3.14 * radius;
}
// Private isValid function
bool Circle ::isValid() const
{
    return (radius > 0);
}