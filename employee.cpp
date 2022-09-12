#include "employee.h"
Employee::Employee() : name(0), birthdate(0), date_hired(0), number(0) {}
Employee::Employee(const Employee &n) : name(n.name), birthdate(n.birthdate), date_hired(n.date_hired), number(n.number) {}
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