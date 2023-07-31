#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    ifstream ifstr;
    ifstr.open("mixedFile",ios::in);
    if (!ifstr.is_open())
    {
        cout << "The file mixedFile cannot be opened for reading!";
        assert(false);
    }

    char ch;
    int n;
    while (ifstr.get(ch))
    {
        if (ch >= '0' && ch <= '9')
        {
            ifstr.unget();
            ifstr>>n;
            cout<<n<<" ";
        }
        
    }
    
    ifstr.close();
    return 0;
}