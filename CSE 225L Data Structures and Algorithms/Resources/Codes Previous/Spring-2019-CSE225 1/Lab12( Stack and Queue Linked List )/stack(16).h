#ifndef STACK_H
#define STACK_h
#include "list.h"

template<class T>
class StackLL: public SinglyLinkedList<T>{
private:
    SinglyLinkedList<T> ls;
public:
    StackLL();
    ~StackLL();

    virtual void push(T value);
    virtual T pop();
    virtual T top();
    virtual bool isEmpty();
};


#endif // STACK_H
