#include "QueType.h"
#include <iostream>
using namespace std;

template <class ItemType>
QueType<ItemType>::QueType()
{
    maxQue = 501 ;
    front = maxQue -1 ;
    rear = maxQue -1;
    items = new ItemType[maxQue];
}

template <class  ItemType>
QueType<ItemType>::QueType(int max)
{
    maxQue = max + 1 ;
    front = maxQue - 1;
    rear = maxQue -1;
    items = new ItemType[maxQue];
}

template <class ItemType>
QueType<ItemType>::~QueType()
{
    delete [] items ;
}

template <class Itemtype>
void QueType<Itemtype>::makeEmpty()
{
    front = maxQue - 1;
    rear = maxQue -1;
}

template <class ItemType>
bool QueType<ItemType>::isfull()
{
    return ((rear+1)%maxQue == front ) ;
}

template <class  Itemtype>
bool QueType<Itemtype>::isEmpty()
{
    return (rear == front);
}

template <class ItemType>
void QueType<ItemType>::enQueue(ItemType newItem)
{
    try {
        if (isfull())
            throw fullQueue();
        else
        {
            rear = (rear+1) % maxQue ;
            items[rear] = newItem ;
        }
    }
    catch (...)
    {
        cout<<"Queue is overflow"<<endl;
    }

}

template <class ItemType>
void QueType<ItemType>::deQueue(ItemType &newItem)
{
    try
    {
        if(isEmpty())
            throw emptyQueue();
        else
        {
            front = (front+1) % maxQue ;
            newItem =  items[front];

        }

    }
    catch (...)
    {
        cout<<"Queue is underflow"<<endl;
    }

}
