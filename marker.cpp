#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main(int argc, char const *argv[])
{
    char ch;

    ifstream istrm;

    istrm.open("file1",ios::in);

    if (!istrm.is_open())
    {
        cout << " file 1 cannot be opened!"<<endl;
        assert(false);
    }
    
    while (istrm.get(ch))
    {
        cout.put(ch);
    }
    
    istrm.close();
    return 0;
}
