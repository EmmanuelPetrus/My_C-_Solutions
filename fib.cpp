#include <iostream>
using namespace std;

long fib(long num);

int main(int argc, char const *argv[])
{
    cout << "Fibonacci: " << fib(35)<<endl;
    return 0;
}

long fib(long num)
{
    if (num == 1 || num == 0)
    {
        return num;
    }
    
    return fib(num-1) + fib(num -2);
    
    
   
}
