#include "Zeller.h"
using namespace std;

Zeller::Zeller(int a, int b, int c) : day(a), month(b), year(c) {}
Zeller::~Zeller() {}
void Zeller::week_day()
{
    int weekday = (day + 26 * (month + 1) / 10 +
                   year + year / 4 - year / 100 + year / 400) %
                  7;

    switch (weekday)
    {
    case 1:
        cout << "Sunday" << endl;
        break;
    case 2:
        cout << "Monday" << endl;
        break;
    case 3:
        cout << "Tuesday" << endl;
        break;
    case 4:
        cout << "Wednesday" << endl;
        break;
    case 5:
        cout << "Thursday" << endl;
        break;
    case 7:
        cout << "Saturday" << endl;
        break;
    case 6:
        cout << "Friday" << endl;
        break;
    default:
        break;
    }
}