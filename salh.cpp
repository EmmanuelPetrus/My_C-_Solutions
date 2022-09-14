#include "SalHourEmp.h"
#include "SalEmp.h"
#include "HourEmp.h"
int main()
{
    SalaryEmployee s1("Emmanuel", "A.", "Peter", 2900);
    HourlyEmployee h1("Emmanuel", "O.", "Olorunfemi", 5);
    SalHourEmp sh1("Emmanuel", "A.", "Adeyemi", 250000000, 1500);
    SalHourEmp rt1("Peter", "O.", "Ogungbe", 45000, 197);
    rt1.print();
    s1.print();
    h1.print();
    sh1.print();

    return 0;
}