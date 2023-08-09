#include <iostream>
using namespace std;

int gcd(int a ,int b);

int main(int argc, char const *argv[])
{
    cout <<"This is the Greatest Common Divisor: "<<gcd(9,12)<<endl;
    cout <<"This is the Greatest Common Divisor: "<<gcd(14,120)<<endl;
    return 0;
}

int gcd(int a, int b)
{
    if (b  == 0)
    {
        return a;    
    }
    gcd(b, a % b);
 
}
