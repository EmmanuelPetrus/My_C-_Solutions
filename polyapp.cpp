#include "poly.h"

int main()
{
    Poly poly1(5);
    poly1.fill();
    Poly poly2(2);
    poly2.fill();

    cout << "Printing the first two polynomials: " << endl;
    cout << "Poly1:" << poly1 << endl;
    cout << "Poly2:" << poly2 << endl;

    Poly poly3 = poly1 + poly2;
    Poly poly4 = poly1 - poly2;
    Poly poly5 = poly1 * poly2;
    Poly poly6 = poly1 / poly2;
    Poly poly7 = poly1 % poly2;

    cout << "Printing the results of operations: " << endl;
    cout << "Poly1 + Poly2: " << poly3 << endl;
    cout << "Poly1 - Poly2: " << poly4 << endl;
    cout << "Poly1 * Poly2: " << poly5 << endl;
    cout << "Poly1 / Poly2: " << poly6 << endl;
    cout << "Poly1 % Poly2: " << poly7 << endl;
    return 0;
}