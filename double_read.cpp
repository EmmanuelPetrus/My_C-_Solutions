#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;

int main(int argc, char const *argv[])
{
    char ch;

    ifstream istr;
    ofstream ostr;

    istr.open("file1",ios::in);
    if (!istr.is_open())
    {
        cout << "file1 cannot be opened!" << endl;
        assert(false);
    }
    
    ostr.open("file2",ios::out);
    if (!ostr.is_open())
    {
        cout << "file2 cannot be opened!" << endl;
        assert(false);
    }

    while (istr.get(ch))
    {
        ostr.put(ch);
    }

    istr.close();
    ostr.close();
    
    

    return 0;
}
