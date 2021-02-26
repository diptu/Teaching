#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include "list.h"

template<class T>

class StackLL{
private:
SinglyLinkedList<T> Is;

public:
StackLL();
~StackLL();
virtual void push(T value);
virtual T pop();
virtual T top();
virtual bool isEmpty();
};
