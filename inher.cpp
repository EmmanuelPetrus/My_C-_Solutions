#include <iostream>
using namespace std;

class Publishing
{
protected:
    string title;
    float price;

public:
    Publishing() : title("Null"), price(0.0) {}
    Publishing(string a, float b) : title(a), price(b) {}
    void getdata()
    {
        cout << "Enter the title of the book you're publishing: ";
        cin >> title;
        cout << "Enter the price of the book: ";
        cin >> price;
    }
    void putdata()
    {
        cout << "The title of the book is " << title << endl;
        cout << "The price is " << price << endl;
    }
};