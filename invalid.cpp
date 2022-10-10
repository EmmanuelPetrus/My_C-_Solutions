#include <stdexcept>
#include <iostream>
using namespace std;
int quotient(int first, int second);
int main()
{
    int num1, num2, result;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter an int eger: ";
        cin >> num1;
        cout << "Enter another int eger: ";
        cin >> num2;
        // Try-Catch block
        try
        {
            cout << "Result of division: " << quotient(num1, num2);
            cout << endl;
        }
        catch (invalid_argument ex)
        {
            cout << ex.what() << endl;
        }
    }
    return 0;
}
// Function definition
int quotient(int first, int second)
{
    if (second == 0)
    {
        throw invalid_argument("Error! Divide by zero!");
    }
    return first / second;
}