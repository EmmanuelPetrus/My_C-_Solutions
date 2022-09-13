#include "Emplo.h"

Employee::Employee(string na, float sal) : Person(na), salary(sal)
{
}

Employee::~Employee()
{
}

void Employee::getSal()
{
    cout << "Salary: " << salary << endl;
}