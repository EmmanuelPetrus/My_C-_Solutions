#include "Square.h"

int main()
{
    Square sq1(12);
    Cube cb1(12);
    cout << "The Area of the Square is: " << sq1.getArea() << endl;
    cout << "The Perimeter of your Square is: " << sq1.getPeri() << endl;
    cout << "The Area of the Cube is: " << cb1.getArea() << endl;
    cout << "The Volume of the Cube is: " << cb1.getVol() << endl;
}