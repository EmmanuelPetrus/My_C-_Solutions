#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main(int argc, char const *argv[])
{
    fstream fstr;

    fstr.open("file1",ios::out|ios::app);
    if (!ostr.is_open())
    {
        cout << "file1 cannot be opened!";
        assert(false);
    }
    
    ostr<<"\nOctober 15,2016.";

    ostr.close();
    return 0;
}
