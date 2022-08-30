#include "time.h"

int main()
{
    Time time(4, 5, 27);
    cout << "Original time: ";
    time.print();

    for (int i = 0; i < 143500; i++)
    {
        time.tick();
    }
    cout << "Time after 143500 ticks ";
    time.print();
    return 0;
}