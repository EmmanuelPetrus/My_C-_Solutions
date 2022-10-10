#include <iostream>
using namespace std;

int quotient(int first, int second);
int main()
{
    int num1, num2, result;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter an integer: ";
        cin >> num1;
        cout << "Enter another integer: ";
        cin >> num2;
        try
        {
            cout << "Result: " << quotient(num1, num2) << endl;
        }
        catch (int ex)
        {
            cout << "Division by zero cannot be performed." << endl;
        }
    }

    return 0;
}

int quotient(int first, int second)
{
    if (second == 0)
        throw 0;
    return first / second;
}
// int main()
// {
//     int num1, num2, result;
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "Enter an integer: ";
//         cin >> num1;
//         cout << "Enter another integer: ";
//         cin >> num2;

//         try
//         {
//             if (num2 == 0)
//                 throw 0;
//             result = num1 / num2;
//             cout << "The result is: " << result << endl;
//         }
//         catch (int x)
//         {
//             cout << "Division by zero cannot be performed." << endl;
//         }
//     }

//     return 0;
// }