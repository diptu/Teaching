#ifndef LIST2_H_INCLUDED
#define LIST2_H_INCLUDED
#include "list.h"

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

#endif // LIST2_H_INCLUDED
