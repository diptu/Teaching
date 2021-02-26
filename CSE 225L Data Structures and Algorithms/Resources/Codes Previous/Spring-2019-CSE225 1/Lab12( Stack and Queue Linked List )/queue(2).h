#ifndef QUEUE_H
#define QUEUE_H


#include "list.h"
template<class T> ;
class QueueLL : public
SinglyLinkedListWithTail<class T> {
private:
SinglyLinkedListWithTail<class T>  ls;
public:
QueueLL();
~QueueLL();
virtual void enqueue(T value);
virtual T dequeue();
virtual T frontItem();
virtual bool isEmpty();
};
