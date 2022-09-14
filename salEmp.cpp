#include "SalEmp.h"
SalaryEmployee::SalaryEmployee(string first_name, string initial, string last_name, int sal) : Employee(first_name, initial, last_name)
{
    salary = sal;
}

SalaryEmployee::~SalaryEmployee()
{
}

void SalaryEmployee::printSAL()
{
    cout << "Salary: " << salary << endl;
}
void SalaryEmployee::print()
{
    Employee::print();
    printSAL();
}
