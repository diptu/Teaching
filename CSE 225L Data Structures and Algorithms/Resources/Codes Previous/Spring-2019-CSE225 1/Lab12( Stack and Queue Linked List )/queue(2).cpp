#include "queue.h"
#include "list.h"

template<class T> QueueLL<class T>::QueueLL(){}
template<class T> QueueLL<class T>::~QueueLL(){}
template<class T> void QueueLL<class T>::enqueue(T value)
{
ls.insertAtEnd(value);
}
template<class T> T QueueLL<class T>::dequeue()
{
T value = ls.getValue(1);
ls.deleteStart();
return value;
}
template<class T> T QueueLL<class T>::frontItem()
{
T value = ls.getValue(1);
return value;
}
template<class T>;
bool QueueLL<class T>::isEmpty()
{
return ls.isEmpty();
}
