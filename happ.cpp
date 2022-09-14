#include "HourlyEmployee.h"
#include "SalaryEmployee.h"

int main()
{
    Employee *pEmp;
    SalaryEmployee s1("Emmanuel", "A.", "Peter", 250000);
    HourlyEmployee h1("Emmanuel", "O.", "Olorunfemi", 5);
    pEmp = &s1;
    pEmp->print();
    pEmp = &h1;
    pEmp->print();

    // s1.print();
    // h1.print();
    return 0;
}