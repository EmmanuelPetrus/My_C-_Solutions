#include "custom.h"

int findValue(char ch)
{
    return static_cast<int>(ch) - 48;
}

int main()
{
    string binary;
    do
    {
        cout << "Enter binary string: ";
        getline(cin, binary);
        cout << binary.size() << endl;
    } while (binary.find_first_not_of("01") < binary.size());

    int base = 2;
    int decimal = 0;

    while (!binary.empty())
    {
        decimal *= base;
        char ch = popFront(binary);
        decimal += findValue(ch);
    }
    cout << "Decimal value: " << decimal;
    return 0;
}

// int main()
// {
//     string strg("abcdefgh");
//     cout << "String before calling pushFront: " << strg << endl;
//     pushFront(strg, 'A');
//     cout << "String after calling pushFront: " << strg << endl;
//     cout << endl;
//     cout << "String before calling pushBack: " << strg << endl;
//     pushBack(strg, 'Z');
//     cout << "String after calling pushBack: " << strg << endl;
//     cout << endl;
//     cout << "String before calling popFront: " << strg << endl;
//     char c1 = popFront(strg);
//     cout << "String after calling popFront: " << strg << endl;
//     cout << "The popped character: " << c1 << endl;
//     cout << endl;
//     cout << "String before calling popBack: " << strg << endl;
//     char c2 = popBack(strg);
//     cout << "String after calling popBack: " << strg << endl;
//     cout << "The popped character: " << c2 << endl;
//     cout << endl;
//     return 0;
// }