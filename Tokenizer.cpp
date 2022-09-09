 #include "Tokenizer.h"

Tokenizer::Tokenizer(const string &tar, const string &del) : target(tar), delim(del)
{
    begin = target.find_first_not_of(delim, 0);
    end = target.find_first_of(delim, begin);
}

bool Tokenizer::moreToken() const
{
    return (begin != -1);
}

string Tokenizer::nextToken()
{
    string token = target.substr(begin, end - begin);
    begin = target.find_first_not_of(delim, end);
    end = target.find_first_of(delim, begin);
    return token;
}
Tokenizer::~Tokenizer()
{
}
