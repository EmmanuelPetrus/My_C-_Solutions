#include "smartptr.h"
#include "fraction.h"

int main()
{
    SmartPtr sp = new Fraction(2, 5);
    cout << "Fraction: " << endl;
    (*sp).print();
    cout << endl;

    cout << "Fraction: " << endl;
    sp->print();
    cout << endl;
    return 0;
}