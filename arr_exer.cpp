#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;
void reversit(char a[])
{
    int i, j;
    char temp;
    int a_len = strlen(a) - 1;
    for (i = a_len, j = 0; i > j; i--, j++)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    cout << "The reversed string is: " << a << endl;
}

int main(void)
{
    char word[26];
    cout << "Enter the string to be reversed: ";
    cin.get(word, 26);
    reversit(word);
    return 0;
}
