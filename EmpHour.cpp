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
    cout << "Wage: " << wage << endl;
}

void Emphour::getWageDetails()
{
    details.getname();
    details.getbirthdate();
    details.getnumber();
    details.getdatehired();
}