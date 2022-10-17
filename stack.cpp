#ifndef STACK_CPP
#define STACK_CPP
#include "stack.h"

template <typename T>

Stack<T>::Stack(int cap) : capacity(cap), size(0)
{
    ptr = new T[capacity];
}

template <typename T>
Stack<T>::~Stack()
{
    delete[] ptr;
}

template <typename T>
void Stack<T>::push(const T &element)
{
    if (size < capacity)
    {
        ptr[size] = element;
        size++;
    }
    else
    {
        cout << "Cannot push; stack is full." << endl;
        assert(false);
    }
}
#endif

template <typename T>
T Stack<T>::pop()
{
    if (size > 0)
    {
        T temp = ptr[size - 1];
        size--;
        return temp;
    }
    else
    {
        cout << "Cannot pop; stack is empty. " << endl;
        assert(false);
    }
}