#include <string>
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    ifstream inputFile;
    ofstream outputFile;
    string line;

    inputFile.open("inFile.dat");
    assert(inputFile);
    int maxSize = 0;
    while (!inputFile.eof())
    {
        getline(inputFile, line);
        if (line.size() > maxSize)
        {
            maxSize = line.size();
        }
    }
    inputFile.close();

    inputFile.open("inFile.dat");
    assert(inputFile);
    outputFile.open("outFile.dat");
    assert(outputFile);
    while (!inputFile.eof())
    {
        getline(inputFile, line);
        string temp(maxSize - line.size(), ' ');
        line.insert(0, temp);
        line.append("\n");
        line.append("\n");
        outputFile << line;
    }
    inputFile.close();
    outputFile.close();
    return 0;
}

// int main()
// {
//     string first, last;
//     char init;

//     cout << "Enter first name: ";
//     cin >> first;
//     cout << "Enter last name: ";
//     cin >> last;
//     cout << "Enter initial: ";
//     cin >> init;
//     cout << endl;
// }

// void reverse(string &strg);
// bool isPalindrome(string &strg);

// int main()
// {
//     string strg;
//     cout << "Enter a string: ";
//     getline(cin, strg);

//     if (isPalindrome(strg))
//     {
//         cout << strg << " is a palindrome.";
//     }
//     else
//     {
//         cout << strg << " is not a palindrome.";
//     }
//     return 0;
// }

// bool isPalindrome(string &strg)
// {
//     string temp(strg);
//     reverse(temp);
//     return (temp == strg);
// }

// void reverse(string &strg)
// {
//     string temp(strg);
//     int size = strg.size();
//     for (int i = 0; i < size; i++)
//         strg[i] = temp[size - 1 - i];
// }
// int main(void)
// {
//     string strg1("Hello my friends");
//     string strg2("Hello friends");

//     cout << strg1 << " compared with " << strg2 << ": ";
//     cout << strg1.compare(strg2) << endl;
//     cout << "Hello compared with Hello: ";
//     cout << strg1.compare(0, 5, strg2, 0, 5) << endl;
//     cout << "Hello compared with Hello: ";
//     cout << strg1.compare(0, 5, strg2) << endl;
//     cout << "Hel compared with Hell: ";
//     cout << strg2.compare(0, 3, "Hello", 4);
//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     string strg("The C++ language is fun to work with.");
//     cout << strg.substr(8) << endl;
//     cout << strg.substr(4, 12) << endl;
//     return 0;
// }

// void reverse(string &strg);

// int main(int argc, char const *argv[])
// {
//     string strg;
//     cout << "Enter a string: ";
//     getline(cin, strg);
//     cout << "Original string: " << strg << endl;
//     reverse(strg);
//     cout << "Reversed string: " << strg;
//     return 0;
// }

// void reverse(string &strg)
// {
//     string temp(strg);
//     int size = strg.size();
//     for (int i = 0; i < size; i++)
//     {
//         strg[i] = temp[size - 1 - i];
//     }
// }
// int main()
// {
//     string strg;
//     cout << "Enter a line of characters: " << endl;
//     getline(cin, strg);
//     cout << strg << endl
//          << endl;
//     cout << "Enter lines of characters ended with $:" << endl;
//     getline(cin, strg, '$');
//     cout << strg;
//     return 0;
// }

// int main()
// {
//     string strg("Hello my friends");

//     cout << "Size: " << strg.size() << endl;
//     cout << "Maximum size: " << strg.max_size() << endl;
//     cout << "Capacity: " << strg.capacity() << endl;
//     cout << "Empty? " << boolalpha << strg.empty() << endl;
//     cout << endl;
//     strg.reserve(20);
//     cout << "Size: " << strg.size() << endl;
//     cout << "Maximum size: " << strg.max_size() << endl;
//     cout << "Capacity: " << strg.capacity() << endl;
//     cout << "Empty? " << boolalpha << strg.empty();
//     return 0;
// }

// int main()
// {
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

// char str[] = "Hello friends of mine.";
// char *sPtr = strstr(str, "friends");
// cout << "The substring starts at index: " << sPtr - str;

// char str[] = "Hello friends of mine.";
// char *pPtr = strpbrk(str, "pfmd");
// cout << "The character " << *pPtr << " was found." << endl;
// cout << "It is at index: " << pPtr - str;

// const char *str1 = "Hello Alice.";
// const char *str2 = "Hello John.";
// const char *str3 = "Hello Betsy.";

// cout << "Comparing str1 and str2: ";
// cout << strcmp(str1, str2) << endl;
// cout << "Comparing str2 and str3: ";
// cout << strcmp(str2, str3) << endl;

// cout <<"Comparing first 5 characters of str1 and str2: ";
// cout <<strncmp(str1,str2,5);
//     char str[] = "July 15,2015";
//     char *p;
//     p = strtok(str, " ");
//     while (p)
//     {
//         cout << p << endl;
//         p = strtok(0, ",");
//     }

//     return 0;
// }