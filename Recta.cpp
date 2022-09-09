#include "Cuboid.h"

int main()
{
    Rectangle rect1(12, 13);
    Cuboid cbd1(13, 12, 15);
    cout << "This is the area of the Rectangle " << rect1.area() << endl;
    cout << "This is the perimeter of the Rectangle " << rect1.peri() << endl;
    cout << "This is the area of the Cuboid " << cbd1.areaCube() << endl;
    cout << "This is the volume of the Cuboid " << cbd1.volCube() << endl;
}