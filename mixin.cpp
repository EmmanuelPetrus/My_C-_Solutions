#include "sten.h"
#include "pr.h"
#include "tass.h"

int main()
{
    Person per("John");
    Student std("Linda", 3.9);
    Professor prf("George", 89000);
    TA ta("Lucien", 3.8, 23000);
    // Printing information about a person
    cout << "Information about person" << endl;
    per.print();
    cout << endl
         << endl;
    // Printing information about a student
    cout << "Information about student" << endl;
    std.print();
    cout << endl
         << endl;
    // Printing information about a professor
    cout << "Information about professor" << endl;
    prf.print();
    cout << endl
         << endl;
    // Printing information about a teaching assistant
    cout << "Information about teaching assistance " << endl;
    ta.print();
    cout << endl
         << endl;
    return 0;
}