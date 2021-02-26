#include "list.h"
#include"tail.h"
template <class T>

class StackLL{
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
