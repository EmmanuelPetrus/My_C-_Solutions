#include "EmpSal.h"
EmpSal::EmpSal(Employee &one, float n) : details(one), sal(n)
{
    bonus = 0.5 * sal;
}

EmpSal::~EmpSal()
{
}

void EmpSal::getTotalSal()
{
    sal += bonus;
    cout << "Your Salary is " << sal << endl;
}