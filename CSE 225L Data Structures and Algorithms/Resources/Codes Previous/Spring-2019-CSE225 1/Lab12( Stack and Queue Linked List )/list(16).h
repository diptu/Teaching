
#ifndef LIST_H
#define LIST_H

#include "SinglyLL.h"

template<class T>
class SinglyLinkedListWithTail : public SinglyLinkedList<T>
{
protected:
    node<T> *tail;
public:
    SinglyLinkedListWithTail();
    ~SinglyLinkedListWithTail();

    virtual void insertAtStart(T value);
    virtual void insertAtEnd(T value);
    virtual void deleteEnd();
};
#endif // LIST_H
