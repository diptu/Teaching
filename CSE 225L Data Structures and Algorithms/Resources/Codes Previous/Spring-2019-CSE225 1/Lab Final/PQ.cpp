#include "PQ.h"

template <class T>
PQ<T>::PQ(int size)
{
    maxItems=size;
    items.elements=new T[maxItems];
    length=0;
}

template <class T>
PQ<T>::~PQ()
{
    delete [] items.elements;
}

template <class T>
void PQ<T>::MakeEmpty()
{
    length=0;
}

template <class T>
bool PQ<T>::IsFull()
{
    return maxItems==length;
}

template <class T>
bool PQ<T>::IsEmpty()
{
    return length==0;
}

template <class T>
void PQ<T>::Enqueue(T item)
{
    if(IsFull())
        {throw FullPQ();
        return;}
    length++;
    items.elements[length-1]=item;
    items.ReheapUp(0,length-1);
}

template<class T>
void PQ<T>::Dequeue(T &item)
{
    if(IsEmpty())
        {throw EmptyPQ();
        return;}
    item=items.elements[0];
    items.elements[0]=items.elements[length-1];
    length--;
    items.ReheapDown(0,length-1);
}
