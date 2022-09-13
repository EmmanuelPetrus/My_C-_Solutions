#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    string name;

public:
    Person(string na);
    void getPerson();
    ~Person();
};

#endif