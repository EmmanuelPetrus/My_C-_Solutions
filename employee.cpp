#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    string number;
    string birthdate;
    string date_hired;

public:
    Employee(string nm, string num, string birth, string hired);
    ~Employee();
    void getname();
    void getnumber();
    void getbirthdate();
    void getdatehired();
};
#endif