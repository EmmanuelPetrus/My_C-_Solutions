#include "SalHourEmp.h"

SalHourEmp::SalHourEmp(string first_name, string initial, string last_name, int sal, int hour) : Employee(first_name, initial, last_name)
{
    salary = sal;
    if (hour >= 180)
    {
        wage = RATE * hour;
    }
    else
    {
        wage = 0;
    }
}
SalHourEmp::~SalHourEmp() {}

void SalHourEmp::printSAL()
{
    cout << "Salary: " << salary << endl;
}

void SalHourEmp::printWage()
{

    cout << "Wage: " << wage << endl;
}

void SalHourEmp::print()
{
    Employee::print();
    printSAL();
    if (wage)
        printWage();
}