#include "ta.h"

int main()
{
    Person person("John");
    person.print();
    Student student("Anne", 3.9);
    student.print();
    Professor professor("Lucie", 78000);
    professor.print();
    TA ta("George", 3.2, 20000);
    ta.print();
    return 0;
}