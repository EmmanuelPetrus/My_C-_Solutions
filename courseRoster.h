#ifndef COURSEROSTER_H
#define COURSEROSTER_H
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

class courseRoster
{
private:
    int size;
    string *stdNames;

public:
    courseRoster();
    ~courseRoster();
    void addStudent(string studentName);
    void print() const;
};
#endif