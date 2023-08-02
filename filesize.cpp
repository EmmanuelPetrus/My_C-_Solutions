#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream ifstr;
    ifstr.open("size",ios::in|ios::ate);

    cout <<"File size: "<<ifstr.tellg();

    ifstr.close();
    return 0;
}
