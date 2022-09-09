#ifndef STUDENT_H
#define STUDENT_H
#include <cassert>
#include <string>
#include <iostream>
#include "StudentSchedule.h"
using namespace std;

class Student
{
private:
    string name;
    StudentSchedule *schedule;

public:
    Student(string name);
    ~Student();
    string getName() const;
    StudentSchedule *getSchedule() const;
    void addCourse(string name);
    void print() const;
};
#endif