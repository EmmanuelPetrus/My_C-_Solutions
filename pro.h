#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "per.h"
class Professor : virtual public Person // Virtual inheritance
{
protected:
    double salary; // Protected data member
public:
    Professor(string name, double salary);
    ~Professor();
    void print();
};
#endif