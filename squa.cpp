#include "squa.h"

Square::Square(double s) : side(s)
{
    if (!isValid())
    {
        cout << "Invalid square!";
        assert(false);
    }
}

Square ::~Square()
{
}
// Definition of print function
void Square ::print() const
{
    cout << "Square of side " << side << endl;
}

double Square ::getArea() const
{
    return (side * side);
}
// Finding the perimeter
double Square ::getPerimeter() const
{
    return (4 * side);
}
// Private isValid function
bool Square ::isValid() const
{
    return (side > 0.0);
}