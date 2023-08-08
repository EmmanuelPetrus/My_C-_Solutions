#include "convert.h"

int main(int argc, char const *argv[])
{
    string strg = toString(12);
    cout << "String: "<<strg<<endl;

    double data = toData<double>("15.67");
    cout << "Data:"<<data;
    return 0;
}
