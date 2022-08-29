#include "MonoAlpha.h"
#include <fstream>

MonoAlpha::MonoAlpha()
{
}

MonoAlpha::~MonoAlpha() {}

void MonoAlpha::encrypt(const char *plainFile, const char *cipherFile)
{
    ifstream istrm(plainFile, ios::in);
    ofstream ostrm(cipherFile, ios::out);
    char c1, c2;
    while (istrm.get(c1))
    {
        c2 = searchEncrypt(c1);
        ostrm.put(c2);
    }
    istrm.close();
    ostrm.close();
}

void MonoAlpha::decrypt(const char *cipherFile, const char *plainFIle)
{
    ifstream istrm(cipherFile, ios::in);
    ofstream ostrm(plainFIle, ios::out);
    char c1, c2;
    while (istrm.get(c1))
    {
        c2 = searchDecrypt(c1);
        ostrm.put(c2);
    }
    istrm.close();
    ostrm.close();
}

char MonoAlpha::searchEncrypt(char c)
{
    int i = 0;
    while (true)
    {
        if (key[i][0] == c)
        {
            return key[i][1];
        }
        i++;
    }
}

char MonoAlpha::searchDecrypt(char c)
{
    int i = 0;
    while (true)
    {
        if (key[i][1] == c)
        {
            return key[i][0];
        }
        i++;
    }
}

const char MonoAlpha::key[][2] = {{'a', 'N'}, {'b', 'N'}, {'c', 'A'}, {'d', 'T'}, {'e', 'R'}, {'f', 'B'}, {'g', 'E'}, {'h', 'C'}, {'i', 'F'}, {'j', 'U'}, {'k', 'X'}, {'l', 'D'}, {'m', 'Q'}, {'n', 'G'}, {'o', 'Y'}, {'p', 'L'}, {'q', 'K'}, {'r', 'H'}, {'s', 'V'}, {'t', 'I'}, {'u', 'J'}, {'v', 'M'}, {'w', 'P'}, {'x', 'Z'}, {'y', 'S'}, {'z', 'W'}};