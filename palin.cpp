#include <iostream>
#include <string>
using namespace std; 

bool isPalindrome(string strg);

int main(int argc, char const *argv[])
{
    string strg1("");
    string strg2("rotor");
    string strg4("hello");

    cout << boolalpha;
    cout << "Is " " a palondrome? " <<isPalindrome(strg1)<<endl;
    cout << "Is 'rotor' a palindrome? "<<isPalindrome(strg2)<<endl;
    cout << "Is 'hello' a palindrome? " << isPalindrome(strg4);
    return 0;
}

bool isPalindrome(string strg)
{
    if (strg.size() <= 1)
    {
        return true;
    }
    else if(strg[0]!=strg[strg.size()-1])
    {
        return false;
    }
    return isPalindrome(strg.substr(1,strg.size()-2));
    
}
