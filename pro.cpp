#include "pro.h"

Professor::Professor(string nm, double sal) : Person(nm), salary(sal) {}
Professor ::~Professor() {}
void Professor::print()
{
    cout << "Professor " << endl;
    cout << "Name: " << name << " ";
    cout << "Salary: " << salary << endl
         << endl;
}