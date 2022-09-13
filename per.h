#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <cassert>
using namespace std;
class Person
{
protected:
    string name; // Protected data member
public:
    Person(string name);
    ~Person();
    void print();
};
#endif