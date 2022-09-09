#include "Tokenizer.h"

int main()
{
    string target("This,is the, string to be tokenized.\n");
    string delimit(" ,\n");
    Tokenizer tokenizer(target, delimit);
    while (tokenizer.moreToken())
    {
        cout << tokenizer.nextToken() << endl;
    }
    return 0;
}