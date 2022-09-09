#ifndef COURSE_H
#define COURSE_H
#include <cassert>
#include <string>
#include <iostream>
#include "courseRoster.h"
using namespace std;
class Course
{
private:
    string name;
    int units;
    courseRoster *roster;

public:
    Course(string name, int units);
    ~Course();
    string getName() const;
    courseRoster *getRoster() const;
    void addStudent(string name);
    void print() const;
};
#endif