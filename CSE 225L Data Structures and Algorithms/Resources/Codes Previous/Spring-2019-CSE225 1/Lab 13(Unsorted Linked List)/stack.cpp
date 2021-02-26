#include "stack.h"
#include "list.h"
template<class T> StackLL<class T>::StackLL(){}
template<class T> StackLL<class T>::~StackLL(){}
template<class T> void StackLL<class T>::push(T value)
{
ls.insertAtStart(value);
}
template<class T> T StackLL<class T>::pop()
{
T value = ls.getValue(1);
ls.deleteStart();
return value;
}
template<class T> T StackLL<class T>::top()
{
T value = ls.getValue(1);
return value;
}
template<class T> bool StackLL<class T>::isEmpty()
{
return ls.isEmpty();
}
