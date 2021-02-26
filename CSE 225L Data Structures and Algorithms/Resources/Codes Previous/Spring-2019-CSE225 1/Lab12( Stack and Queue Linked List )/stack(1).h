#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include "list.h"
#include "list.cpp"

template <class T>
class StackLL
{
private:
    SinglyLinkedList<T> ls;
public:
    StackLL();
    ~StackLL();
    virtual void Push(T value);
    virtual T Pop();
    virtual T top();
    virtual bool isEmpty();
};
#endif // STACK_H_INCLUDED
