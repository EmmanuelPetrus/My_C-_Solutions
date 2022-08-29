#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;

public:
    Circle(double radius);
    Circle();
    ~Circle();
    Circle(const Circle &circle);
    void setRadius(double radius);
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
};

Circle::Circle(double rds) : radius(rds)
{
    cout << "The parameter constructor was called." << endl;
}

Circle::Circle() : radius(0.0)
{
    cout << "The default constructor was called." << endl;
}

Circle::Circle(const Circle &circle) : radius(circle.radius)
{
    cout << "The copy constructor was called." << endl;
}

Circle::~Circle()
{
    cout << "The destructor was called for circle with radius";
    cout << endl;
}

void Circle::setRadius(double value)
{
    radius = value;
}

double Circle::getRadius() const
{
    return radius;
}

double Circle::getArea() const
{
    const double PI = 3.14;
    return (PI * radius * radius);
}

double Circle::getPerimeter() const
{
    const double PI = 3.14;
    return (2 * PI * radius);
}

int main()
{
    Circle circle1(5.2);
    cout << "Radius:" << circle1.getRadius() << endl;
    cout << "Area:" << circle1.getArea() << endl;
    cout << "Perimeter:" << circle1.getPerimeter() << endl
         << endl;

    Circle circle2(circle1);
    cout << "Radius:" << circle2.getRadius() << endl;
    cout << "Area:" << circle2.getArea() << endl;
    cout << "Perimeter:" << circle2.getPerimeter() << endl
         << endl;

    Circle circle3;
    cout << "Radius:" << circle3.getRadius() << endl;
    cout << "Area:" << circle3.getArea() << endl;
    cout << "Perimeter" << circle3.getPerimeter() << endl
         << endl;
    return 0;
}