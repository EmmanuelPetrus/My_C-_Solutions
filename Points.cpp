#include "Points.h"
#include <cmath>
using namespace std;

Points::Points() : x(0), y(0) {}
Points::Points(int a, int b) : x(a), y(b) {}
Points::Points(const Points &t) : x(t.x), y(t.y) {}
Points::~Points() {}

void Points::print() const
{
    cout << "X: " << x << " "
         << "Y: " << y << endl;
}

void Points::position()
{
    if (x < 0 && y < 0)
        cout << "The position of this object is downward" << endl;
    else if (x < 0 && y > 0)
        cout
            << "The position of this object is leftward" << endl;
    else if (x > 0 && y > 0)
        cout
            << "The position of this object is upward" << endl;
    else
        cout << "The position of this object is rightward" << endl;
}

void Points::point_distance(Points &p)
{
    float x_total = pow(abs(x - p.x), 2);
    float y_total = pow(abs(y - p.y), 2);
    float distance = sqrt((x_total + y_total));
    cout << "The distance between the two points is: " << distance << endl;
}