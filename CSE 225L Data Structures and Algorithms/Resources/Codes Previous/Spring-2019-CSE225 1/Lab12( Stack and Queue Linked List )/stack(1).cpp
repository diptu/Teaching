#include "stack.h"

template <class T>
StackLL<T>::StackLL()
{
}

template <class T>
StackLL<T>::~StackLL()
{
}

template <class T>
void StackLL<T>::Push(T value)
{
    ls.insertAtStart(value);
}

template <class T>
T StackLL<T>::Pop()
{
    T value = ls.getValue(1);
    ls.deleteAtStart();
    return value;
}

template <class T>
T StackLL<T>::top()
{
    T value = ls.getValue(1);
    return value;
}

template <class T>
bool StackLL<T>::isEmpty()
{
    return ls.isEmpty();
}
