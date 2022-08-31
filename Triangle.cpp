#include "Triangle.h"
using namespace std;

Triangle::Triangle(float a, float b, float c) : firstSide(a), secondSide(b), thirdSide(c)
{
    if (((firstSide + secondSide) < thirdSide) || ((firstSide + thirdSide) < secondSide) || ((thirdSide + secondSide) < firstSide))
    {
        cout << "Invalid Triangle Constructed!!!" << endl;
        assert(false);
    }
}

Triangle::Triangle(const Triangle &a) : firstSide(a.firstSide), secondSide(a.secondSide), thirdSide(a.thirdSide){};

Triangle::~Triangle() {}
void Triangle::getSides()
{
    cout << "The sides of the Triangle are: " << firstSide << " " << secondSide << " " << thirdSide << endl;
}

float Triangle::getPerimeter()
{
    float perimeter = firstSide + secondSide + thirdSide;
    return perimeter;
}

void Triangle::getArea()
{
    float p = getPerimeter() / 2;
    float area = sqrt((p) * (p - firstSide) * (p - secondSide) * (p - thirdSide));
    cout << "The Area of the Triangle is " << area << endl;
}