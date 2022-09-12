#include "employee.h"
#include "EmpSal.h"
#include "EmpHour.h"
int main()
{
    Employee emp1("Emmanuel Peter", "08105053591", "27/12/2001", "13/01/2023");
    Employee emp2("Olorunfemi Emmanuel", "09014343591", "13/10/2000", "23/05/2024");
    Employee emp3("Adeosun Samuel", "08023251786", "12/12/2000", "12/05/2004");
    EmpSal sal1(emp1, 17800);
    Emphour sal2(emp2, 14590);
    EmpSal sal3(emp3, 25900);
    sal1.getname();
    sal1.getbirthdate();
    sal1.getdatehired();
    sal1.getnumber();
    sal1.getTotalSal();
    sal2.getname();
    sal2.getbirthdate();
    sal2.getdatehired();
    sal2.getnumber();
    sal2.getTotalOvertime();
    sal3.getname();
    sal3.getbirthdate();
    sal3.getdatehired();
    sal3.getnumber();
    sal3.getTotalSal();
    return 0;
}