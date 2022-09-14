#include <iostream>
using namespace std;

class First
{
private:
    int fr;

public:
    First(int fr);
    virtual ~First();
    virtual void print() const;
};

class Second : public First
{
private:
    int se;

public:
    Second(int fr, int se);
    ~Second();
    void print() const;
};

First::First(int fr) : fr(fr){};
First::~First() {}
void First::print() const { cout << "This is the base class" << endl; }

Second::Second(int fr, int se) : First(fr), se(se) {}
Second::~Second() {}
void Second::print() const
{
    cout << "This is the derived class" << endl;
    cout << "Se: " << se << endl;
}

int main()
{
    First *pBase;
    pBase = new First(12);

    // First a1(12);
    pBase->print();
    // Second a2(14, 15);
    pBase = new Second(14, 15);
    pBase->print();
    delete pBase;
    return 0;
}