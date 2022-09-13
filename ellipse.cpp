#include "ellipse.h"
// Constructor
Ellipse ::Ellipse(double r1, double r2)
    : radius1(r1), radius2(r2)
{
    if (!isValid())
    {
        cout << "Invalid ellipse!";
        assert(false);
    }
}
// Destructor
Ellipse ::~Ellipse()
{
}
// Definition of print function
void Ellipse ::print() const
{
    cout << "Ellipse of radii: " << radius1 << " X " << endl;
    cout << radius2 << endl;
}
// Finding the area
double Ellipse ::getArea() const
{
    return (3.14 * radius1 * radius2);
}
// Finding the perimeter
double Ellipse ::getPerimeter() const
{
    double temp = (radius1 * radius1 + radius2 * radius2) / 2;
    return (2 * 3.14 * temp);
}
// Private isValid function
bool Ellipse ::isValid() const
{
    return (radius1 > 0 && radius2 > 0);