#ifndef PERSON_H
#define PERSON_H
#include <iostream>

class Person
{
private:
    int age;
    char *name;

public:
    Person(int p, char *t);
    Person(Person &k) = delete;
    ~Person();

    char *getName();
    int getAge();

    void setName(char *p);
    void setAge(int p);
};

#endif