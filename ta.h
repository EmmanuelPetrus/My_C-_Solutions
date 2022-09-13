#ifndef TA_H
#define TA_H
#include "st.h"
#include "pro.h"
class TA : public Professor, public Student // Double inheritance
{
public:
    TA(string name, double gpa, double sal);
    ~TA();
    void print();
};
#endif