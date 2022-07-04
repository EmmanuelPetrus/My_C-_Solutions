#include <iostream>
using namespace std;

// class Publishing
// {
// protected:
//     string title;
//     float price;

// public:
//     Publishing() : title("Null"), price(0.0) {}
//     Publishing(string a, float b) : title(a), price(b) {}
//     void getdata()
//     {
//         cout << "Enter the title of the book you're publishing: ";
//         cin >> title;
//         cout << "Enter the price of the book: ";
//         cin >> price;
//     }
//     void putdata()
//     {
//         cout << "The title of the book is " << title << endl;
//         cout << "The price is " << price << endl;
//     }
// };

// class Book : Publishing
// {
// private:
//     int page_count;

// public:
//     Book() : Publishing(), page_count(0) {}
//     Book(int page) : Publishing()
//     {
//         page_count = page;
//     }
//     void getdata()
//     {
//         Publishing::getdata();
//         cout << "Enter the page count: ";
//         cin >> page_count;
//     }
//     void putdata()
//     {
//         Publishing::putdata();
//         cout << "The total page count is: " << page_count << endl;
//     }
// };

// class AutoCassette : Publishing
// {
// private:
//     float tape;

// public:
//     AutoCassette() : Publishing(), tape(0.0) {}
//     AutoCassette(float tp) : Publishing()
//     {
//         tape = tp;
//     }
//     void getdata()
//     {
//         Publishing::getdata();
//         cout << "Enter the tape(mins): ";
//         cin >> tape;
//     }
//     void putdata()
//     {
//         Publishing::putdata();
//         cout << "Enter sizeof the tape(mins) is: " << tape << endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Book b1;
//     AutoCassette a1;
//     b1.getdata();
//     a1.getdata();
//     b1.putdata();
//     a1.putdata();
//     return 0;
// }

