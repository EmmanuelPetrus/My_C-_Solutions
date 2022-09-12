#include "EmpHour.h"

Emphour::Emphour(Employee &one, float n) : details(one), wage(n)
{
    overtime_rate = 0.6 * wage;
}

Emphour::~Emphour()
{
}

void Emphour::getTotalOvertime()
{
    wage += overtime_rate;
    cout << "Your total wage is " << wage << endl;
}
