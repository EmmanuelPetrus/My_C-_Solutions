#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main(int argc, char const *argv[])
{
    int data;

    ifstream inStrm;

    inStrm.open("integerFile");
    if (!inStrm.is_open())
    {
        cout << "integerFile cannot be opened!";
        assert(false);
    }

    for (int i = 1; i <=  10; i++)
    {
        inStrm >> data;
        cout << data <<" ";
    }
    
    inStrm.close();


    // ofstream outStrm;

    // outStrm.open("integerFile");
    // if (!outStrm.is_open())
    // {
    //     cout<<"integerFile cannot be opened!";
    //     assert(false);
    // }

    // for (int i = 1; i <= 10; i++)
    // {
    //     outStrm << i*10 << " ";
    // }
    
    // outStrm.close();
    
    return 0;
}
