#include "stack.cpp"

int main()
{
    Stack<int> stack(10);
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(8);
    cout << stack.pop() << endl;
    cout << stack.pop();
    return 0;
}