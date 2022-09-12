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
    cout << "Salary : " << sal << endl;
}

void EmpSal::getSalDetails()
{
    details.getname();
    details.getbirthdate();
    details.getnumber();
    details.getdatehired();
}