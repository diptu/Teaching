#include "Tail.h"
template <class T>

class QueueLL : public SinglyLinkedListWithTail<T>{
private:
SinglyLinkedListWithTail<T> ls;
public:
QueueLL();
~QueueLL();
virtual void enqueue(T value);
virtual T dequeue();
virtual T frontItem();
virtual bool isEmpty();
};
