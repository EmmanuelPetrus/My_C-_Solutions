#include "circle.h"
int main(int argc, char const *argv[])
{
    // Instantiation of first object and applying operations
    Circle circle1(5.2);
    cout << "Radius: " << circle1.getRadius() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Perimeter: " << circle1.getPerimeter() << endl;
    cout << endl;
    // Instantiation of second object and applying operations
    Circle circle2(circle1);
    cout << "Radius: " << circle2.getRadius() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Perimeter: " << circle2.getPerimeter() << endl;
    cout << endl;
    // Instantiation of third object and applying operations
    Circle circle3;
    cout << "Radius: " << circle3.getRadius() << endl;
    cout << "Area: " << circle3.getArea() << endl;
    cout << "Perimeter: " << circle3.getPerimeter() << endl;
    cout << endl;
    return 0;
}
