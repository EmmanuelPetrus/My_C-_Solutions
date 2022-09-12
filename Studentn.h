#ifndef STUDENTN_H
#define STUDENTN_H
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    float gpa;

public:
    Student();
    Student(string nm, float gp);
    void print();
    ~Student();
};

#endif
