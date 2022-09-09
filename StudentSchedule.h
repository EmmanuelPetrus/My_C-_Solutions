#ifndef STUDENTSCHEDULE_H
#define STUDENTSCHEDULE_H
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

class StudentSchedule
{
private:
    int size;
    string *courseNames;

public:
    StudentSchedule();
    ~StudentSchedule();
    void addCourse(string course);
    void print() const;
};

#endif