#ifndef REGISTRAR_H
#define REGISTRAR_H
#include "corse.h"
#include "students.h"

class Registrar
{
public:
    Registrar();
    ~Registrar();
    void enroll(Student student, Course course);
};
#endif