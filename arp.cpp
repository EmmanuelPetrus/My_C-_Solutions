#include "arr.h"

int main()
{
    Array arr(3);

    arr[0] = 22.31;
    arr[1] = 78.61;
    arr[2] = 65.22;

    for (int i = 0; i < 3; i++)
    {
        cout << "Value of arr[" << i << "]:" << arr[i] << endl;
    }

    return 0;
}