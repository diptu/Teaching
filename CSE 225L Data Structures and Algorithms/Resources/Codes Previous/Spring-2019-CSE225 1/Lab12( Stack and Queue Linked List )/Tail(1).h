#ifndef Tail_H
#define Tail_H
#include "List.h"

template <class T>
class SinglyLinkedListWithTail : public SinglyLinkedList<T>
{
protected:
    node<T> *tail ;
public:
    SinglyLinkedListWithTail();
    ~SinglyLinkedListWithTail();

    virtual void insertAtStart(T value);
    virtual void insertAtEnd(T value);
    virtual void deleteEnd();
};

