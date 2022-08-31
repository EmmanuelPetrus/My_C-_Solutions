#include "Quadratic.h"
#include <cassert>
using namespace std;

Quadratic::Quadratic(int x, int y, int z) : a(x), b(y), c(z) {}
Quadratic::~Quadratic() {}
void Quadratic::roots()
{
    float dis_criminant = sqrt(pow(b, 2) - (4 * a * c));
    if (dis_criminant < 0 || isnan(dis_criminant))
    {
        cout << "This Quadratic Equation has no root" << endl;
        assert(false);
    }
    else if (dis_criminant == 0)
    {
        float root = -(b);
        cout << "The root of the Quadratic Equation is " << root << endl;
    }
    else
    {
        float root1 = -b + dis_criminant;
        float root2 = -b - dis_criminant;
        cout << "The roots of the Quadratic Equation are " << root1 << " and " << root2 << endl;
    }
}