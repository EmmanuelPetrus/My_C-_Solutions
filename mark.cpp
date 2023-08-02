#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    char ch;
    int n;

    ifstream istr;
    istr.open("mixedFile",ios::in);

    n = istr.tellg();
    while (istr.get(ch))
    {
        cout<<n<<" "<<ch<<endl;
        n = istr.tellg();
    }
    istr.close();
    return 0;
}
