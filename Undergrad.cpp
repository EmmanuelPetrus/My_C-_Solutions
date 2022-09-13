#include "Undergrad.h"

Undergrad::Undergrad(string nm, float gp, int y) : Student(nm, gp), year(y)
{
}

Undergrad::~Undergrad()
{
}

void Undergrad::getYear()
{
    cout << "Year: 1" << year << endl;
}