
#include "BigInteger.h"
#include <iomanip>

int main(int argc, char const *argv[])
{
    string strg1,strg2;
    cout << "Enter the first big integer: ";
    cin>>strg1;
    cout << "Enter the second big integer: ";
    cin >> strg2;

    BigInteger first(strg1);
    BigInteger second(strg2);

    BigInteger result = first + second;

    strg1 = first.toString();
    strg2 = second.toString();
    string strg3 = result.toString();
    string dashes(strg3.length(),'-');

    cout << "First big integer " << setw(strg3.length()); 
    cout << right << strg1 << " + " << endl;
    cout << "Second big integer" << setw(strg3.length());
    cout << right << strg2 << endl;
    cout << " " << dashes << endl;
    cout << "Result " << setw(strg3.length());
    cout << right << strg3 << endl;
    return 0;
}
