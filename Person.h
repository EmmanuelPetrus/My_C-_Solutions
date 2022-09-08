#ifndef PERSON_H
#define PERSON_H
#include <cassert>
#include <iostream>
#include <iomanip>
using namespace std;
class Person
{
private:
    long identity;

public:
    Person();
    Person(long identity);
    ~Person();
    Person(const Person &person);
    void print() const;
};

#endif
// #ifndef PERSON_H
// #define PERSON_H
// #include <iostream>

// class Person
// {
// private:
//     int age;
//     char *name;

// public:
//     Person(int p, char *t);
//     Person(Person &k) = delete;
//     ~Person();

//     char *getName();
//     int getAge();

//     void setName(char *p);
//     void setAge(int p);
// };

// #endif