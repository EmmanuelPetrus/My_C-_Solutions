#include <iostream>
#include <fstream>
#include <assert.h>
#include <limits>
using namespace std;

int main()
{
    int first, second;
    int sentinel = numeric_limits<int>::max();

    ifstream strm1("infile1");
    ifstream strm2("infile2");
    ofstream strm3("outfile");
    if (!strm1.is_open())
    {
        cout << "Error opening infile1!" << endl;
        assert(false);
    }

    if (!strm2.is_open())
    {
        cout << "Error opening infile2!" << endl;
        assert(false);
    }

    if (!strm3.is_open())
    {
        cout << "Error opening outfile1!" << endl;
        assert(false);
    }

    strm1 >> first;
    strm2 >> second;
    while (strm1 || strm2)
    {
        if (first <= second)
        {
            strm3 << first << " ";
            strm1 >> first;
            if (!strm1)
                first = sentinel;
        }
        else
        {
            strm3 << second << " ";
            strm2 >> second;
            if (!strm2)
            {
                second = sentinel;
            }
        }
    }
    strm1.close();
    strm2.close();
    strm3.close();
    return 0;
}