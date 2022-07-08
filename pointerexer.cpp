#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{   
    const int max = 5;
    float num[max];
    float *pNum = num;
    float total = 0;
    for (int i = 0; i < max; i++)
    {
        cout << "Kindly enter your number:";
        cin >> num[i];
    }
    for (int i = 0; i < max; i++)
    {
        total += *(pNum + i);
    }
    float average = total / max;
    cout << "The average of the numbers is: " << average << endl;

    return 0;
}
