#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    fstream fstr;

    fstr.open("infile1",ios::in|ios::out);
    if (!fstr.is_open())
    {
        cout<<"intFile cannot be opened!";
        assert(false);
    }
    
    int num;
    int sum =0;
    while (fstr>>num)
    {
        sum+=num;
    }
    fstr.clear();
    fstr<<"\nThe sum of the numbers is:";
    fstr << sum;

    fstr.close();
    return 0;
}