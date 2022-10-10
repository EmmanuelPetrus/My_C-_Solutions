#include "fun.cpp"
int main()
{
    Fun<int> Fun1(23);
    Fun<double> Fun2(12.7);
    Fun<char> Fun3('A');
    Fun<string> Fun4("Hello");

    cout << "Fun1: " << Fun1.get() << endl;
    cout << "Fun2: " << Fun2.get() << endl;
    cout << "Fun3: " << Fun3.get() << endl;
    cout << "Fun4: " << Fun4.get() << endl;

    Fun1.set(47);
    Fun3.set('B');

    cout << "Fun1 after set: " << Fun1.get() << endl;
    cout << "Fun3 after set: " << Fun3.get() << endl;
    return 0;
}