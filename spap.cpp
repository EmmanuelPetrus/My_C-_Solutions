#include "Sphere.h"

int main()
{
    Circle circ1(3);
    Sphere sph1(17);

    cout << "The Area of the Circle is " << circ1.cirArea() << endl;
    cout << "The perimeter of the Circle is " << circ1.cirPeri() << endl;
    cout << "The Surface Area of the Sphere is " << sph1.getSurface() << endl;
    cout << "The Volume of the Sphere is " << sph1.getVolume() << endl;
    return 0;
}