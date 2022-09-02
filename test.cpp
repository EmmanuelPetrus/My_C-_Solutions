#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int list[4] = {12, 4, 0, 13};
    for (int h = 1; h < 4; h++)
    {
        int key = list[h];
        int k = h - 1; // start comparing with previous item
        while (k >= 0 && key < list[k])
        {
            list[k + 1] = list[k];
            --k;
        }
        list[k + 1] = key;
    } // end for
    for (int i = 0; i < 4; i++)
    {
        cout << list[i] << " ";
    }

    return 0;
}
