#include <iostream>
using namespace std;

int sum(int n);

int factorial(int n);

int main(int argc, char const *argv[])
{
    cout << "sum (0) = " << sum (0) << endl ;  
    cout << "factorial (1) = " << factorial (1) << endl << endl;
// Testing sum (3) and factorial (3)
    cout << "sum (3) = " << sum (3) << endl;  
    cout << "factorial (3) = " << factorial (3) << endl << endl;
// Testing sum (7) and factorial (7)
    cout << "sum (7) = " << sum (7) << endl;  
    cout << "factorial (7) = " << factorial (7);
    return 0;

}
// Recursive definition of sum (n)
int sum (int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return n + sum (n - 1);
}
// Recursive definition of factorial (n)
int factorial (int n)
{
    if (n <= 1)
    {
    return 1;
    }
    return n * factorial (n - 1);
}
