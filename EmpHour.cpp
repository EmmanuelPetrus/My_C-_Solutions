#include "EmpHour.h"

Emphour::Emphour(Employee &one, float n) : details(one), wage(n)
{
}

Emphour::~Emphour()
{
}

void Emphour::calcOvertime()
{
    overtime_rate = 0.6 * wage;
}
