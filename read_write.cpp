#include <iostream>
#include <string>
#include <fstream>
#include <cassert>
using namespace std;

int main(int argc, char const *argv[])
{
    int int1 = 12325;
    double double1 = 45.78;
     
    ofstream strmOut("Sample",ios::out|ios::binary);
    if (!strmOut.is_open())
    {
        cout << "The file Sample cannot be opened for writing!";
        assert(false);
    }
    
    strmOut.write(reinterpret_cast<char*>(&int1),sizeof(int));
    strmOut.write(reinterpret_cast<char*>(&double1),sizeof(double));
    strmOut.close();

    int int2;
    double double2;

    ifstream strmIn("Sample",ios::in|ios::binary);
    if (!strmIn.is_open())
    {
        cout << "The file Sample cannot be opened for reading!";
        assert(false);
    }
    
    strmIn.read(reinterpret_cast<char*>(&int2),sizeof(int));
    strmIn.read(reinterpret_cast<char*>(&double2),sizeof(double));
    strmIn.close();

    

    cout << "Value of int2: "<<int2<<endl;
    cout <<"Value of double2: "<<double2<<endl;
    return 0;
}
