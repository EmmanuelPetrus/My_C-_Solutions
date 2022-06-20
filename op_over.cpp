#include <iostream>
using namespace std;

// class Counter
// {
// private:
//     unsigned int count;

// public:
//     Counter() : count(0) {}
//     unsigned int get_count() { return count; }
//     void operator++()
//     {
//         ++count;
//     }
// };

// int main(void)
// {
//     Counter c1, c2;
//     cout << "\nc1=" << c1.get_count();
//     cout << "\nc2=" << c2.get_count();

//     ++c1;
//     ++c2;
//     ++c2;

//     cout << "\nc1=" << c1.get_count();
//     cout << "\nc2=" << c2.get_count();
//     return 0;
// }

// class Counter
// {
// private:
//     unsigned int count;

// public:
//     Counter() : count(0) {}
//     unsigned int get_count() { return count; }
//     Counter operator++()
//     {
//         ++count;
//         Counter temp;
//         temp.count = count;
//         return temp;
//     }
// };

// int main(void)
// {
//     Counter c1, c2;
//     cout << "\nc1=" << c1.get_count();
//     cout << "\nc2=" << c2.get_count();

//     ++c1;
//     c2 = ++c1;
//     ;

//     cout << "\nc1=" << c1.get_count();
//     cout << "\nc2=" << c2.get_count() << endl;
//     return 0;
// }

// Nameless temporary objects

// class Counter
// {
// private:
//     unsigned int count;

// public:
//     Counter() : count(0) {}
//     Counter(int c) : count(c) {}
//     unsigned int get_count() { return count; }
//     Counter operator++()
//     {
//         ++count;
//         return Counter(count); // an unamed temporary object
//     }
// };

// class Counter
// {
// private:
//     unsigned int count;

// public:
//     Counter() : count(0) {}
//     Counter(int c) : count(c) {}
//     unsigned int get_count() { return count; }
//     Counter operator++()
//     {
//         ++count;
//         return Counter(count); // an unamed temporary object
//     }
// };

// class Counter
// {
// private:
//     unsigned int count;

// public:
//     Counter() : count(0) {}
//     Counter(int c) : count(c) {}
//     unsigned int get_count() { return count; }
//     Counter operator++()
//     {
//         return Counter(++count); // an unamed temporary object
//     }
//     Counter operator++(int)
//     {
//         return Counter(count++); // an unamed temporary object
//     }
// };



// int main(void)
// {
//     Counter c1, c2;
//     cout << "\nc1=" << c1.get_count();
//     cout << "\nc2=" << c2.get_count();

//     ++c1;
//     c2 = ++c1;

//     cout << "\nc1=" << c1.get_count();
//     cout << "\nc2=" << c2.get_count() ;

//     c2 = c1++;
//     cout << "\nc1=" << c1.get_count();
//     cout << "\nc2=" << c2.get_count() << endl;
//     return 0;
// }

// Overloading Binary Operators 
class Distance 