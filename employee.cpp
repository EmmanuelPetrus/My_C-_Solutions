#include "employee.h"

Employee ::Employee(string nm, string num, string birth, string hired)
{
    name = nm;
    number = num;
    birthdate = birth;
    date_hired = hired;
}

Employee ::~Employee() {}

void Employee::getbirthdate()
{
    cout << "This is the Employee's birthdate " << birthdate << endl;
}
void Employee::getname()
{
    cout << "This is the Employee's name " << name << endl;
}
void Employee::getdatehired()
{
    cout << "This is the date you were hired " << date_hired << endl;
}
void Employee::getnumber()
{
    cout << "This is the employee's phone number " << number << endl;
}