#include <iostream>
using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cout << "Enter a line of integers and eof at the end:" << endl;
//     while (cin >> n)
//     {
//         cout << n * 2 << " ";
//     }

//     return 0;
// }

// int main()
// {
//     int x;
//     cout << "Enter five characters(no spaces):";
//     for (int i = 0; i < 5; i++)
//     {
//         x = cin.get();
//         cout << x << " ";
//     }
//     return 0;
// }

int main()
{
    char c;
    cout << "Enter a multi-line text and EOF as the last line." << endl;
    char pre = '\n';
    while (cin.get(c))
    {
        if (pre == ' ' || pre == '\n')
        {
            cout.put(toupper(c));
        }
        else
        {
            cout.put(c);
        }
        pre = c;
    }
    return 0;
}