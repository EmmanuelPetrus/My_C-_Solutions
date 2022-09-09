#include "registrar.h"

Registrar::Registrar()
{
}
Registrar::~Registrar()
{
}
void Registrar::enroll(Student student, Course course)
{
    (course.getRoster())->addStudent(student.getName());
    (student.getSchedule())->addCourse(course.getName());
}