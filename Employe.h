#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    string first_name;
    string initial;
    string last_name;

public:
    Employee(string fname, string initial, string last_name);
    void print();
    ~Employee();
};

#endif