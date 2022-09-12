#include "employee.h"
Employee::Employee() : name("0"), birthdate("0"), date_hired("0"), number("0") {}
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
    cout << "Employee BirthDate: " << birthdate << endl;
}
void Employee::getname()
{
    cout << "Employee Name: " << name << endl;
}
void Employee::getdatehired()
{
    cout << "Date Hired: " << date_hired << endl;
}
void Employee::getnumber()
{
    cout << "Phone Number: " << number << endl;
}