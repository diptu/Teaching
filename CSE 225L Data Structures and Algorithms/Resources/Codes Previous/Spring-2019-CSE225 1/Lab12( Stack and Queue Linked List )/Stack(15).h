#include "List.h"


template<class T>

class StackLL{
private:
    SinglyLinkedList<T> is;
public:
    StackLL();
    ~StackLL();
    virtual void push(T value);
    virtual T pop();
    virtual T top();
    virtual bool isEmpty();
};
