#include "HourEmp.h"
HourlyEmployee::HourlyEmployee(string first_name, string initial, string last_name, int hour) : Employee(first_name, initial, last_name)
{
    hour = hour;
    wage = RATE * hour;
}

HourlyEmployee::~HourlyEmployee()
{
}
void HourlyEmployee::printWage() 
{
    cout << "Wage: " << wage << endl;
}
void HourlyEmployee::print() 
{
    Employee::print();
    printWage();
}