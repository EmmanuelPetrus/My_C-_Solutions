#include "pr.h"

Professor::Professor(string nm, double sal) : Person(nm)
{
    salary = sal;
}
void Professor::printSalary()
{
    cout << "Salary: ";
    cout << fixed << setprecision(2) << salary << endl;
}
void Professor ::print()
{
    Person ::print();
    printSalary();
}