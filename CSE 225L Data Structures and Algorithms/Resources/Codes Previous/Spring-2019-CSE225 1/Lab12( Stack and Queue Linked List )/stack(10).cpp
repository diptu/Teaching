#include "stack.h"

template<class T>
StackLL<T>::StackLL()
{
   // ls.head=ls.curptr=NULL;
    //ls.length=0;
}

template<class T>
StackLL<T>::~StackLL()
{
    //while(!ls.isEmpty())
        //ls.deleteStart();
}

template<class T> void
StackLL<T>::push(T value)
{
    ls.insertAtStart(value);
}

template<class T>
T StackLL<T>::pop()
{
    T value = ls.getValue(1);
    ls.deleteStart();
    return value;
}

template<class T>
T StackLL<T>::top()
{
    T value = ls.getValue(1);
    return value;
}

template<class T> bool
StackLL<T>::isEmpty()
{
    return ls.isEmpty();
}

