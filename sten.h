#ifndef STUDENT_H
#define STUDENT_H
#include "pers.h"
#include "stdtype.h"
class Student : public Person, public StdType
{
public:
    Student(string name, double gpa);
    void printGPA();
    void print();
};
#endif