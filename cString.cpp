#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    // char str1[] = "This is the first string.";
    // char str2[] = "This is the second string.";
    // strcpy(str1, str2);
    // cout << "str1:" << str1 << endl;
    // char str3[] = "abcdefghijk.";
    // const char *str4 = "ABCDEFGHIJK";
    // strncpy(str3, str4, 4);
    // cout << "str3:" << str3 << endl;

    // char str1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // const char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // const char *str3 = "Goodbye";
    // const char *str4 = "Goodbye\0 my friend";
    // cout << "str1: " << str1 << endl;
    // cout << "str2: " << str2 << endl;
    // cout << "str3: " << str3 << endl;
    // cout << "str4: " << str4 << endl
    //      << endl;
    // char str5[20];
    // cout << "Enter the characters for str5:";
    // cin >> str5;
    // cout << "str5:" << str5;

    // char lines[3][80];
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Enter a line of characters: ";
    //     cin.getline(lines[i], 80);
    // }
    // cout << endl;
    // cout << "Output:" << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << lines[i] << endl;
    // }
    // char str[] = "Hello friends.";
    // char *cPtr = strchr(str, 'e');
    // *cPtr = 'E';
    // cout << "str after first change:" << str << endl;
    // cPtr = strrchr(str, 'e');
    // *cPtr = 'E';
    // cout << "str after the last change: " << str << endl;

    char str[] = "Hello friends of mine.";
    char *sPtr = strstr(str, "friends");
    cout << "The substring starts at index: " << sPtr - str;
    return 0;
}