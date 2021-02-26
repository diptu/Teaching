#include "quetype.h"
#include <iostream>
using namespace std;

template<class ItemType>
QueType<ItemType>::QueType(int max)
{
    maxQue = max + 1;
    fr = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];
}

template<class ItemType>
QueType<ItemType>::QueType()
{
    maxQue = 501;
    fr = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];
}

template<class ItemType>
QueType<ItemType>::~QueType()
{
    delete [] items;
}

template<class ItemType>
void QueType<ItemType>::makeEmpty()
{
    fr = maxQue - 1;
    rear = maxQue - 1;
}

template<class ItemType>
bool QueType<ItemType>::isEmpty()
{
    return (fr==rear);
}

template<class ItemType>
bool QueType<ItemType>::isFull()
{
    return ((rear+1)%maxQue==fr);
}

template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
    try
    {
        if(isFull())
            throw FullQueue();
        else
        {
        rear=(rear+1)%maxQue;
        items[rear]=newItem;
        }
    }
    catch(FullQueue f)
    {
        cout<<"Queue OverFlow"<<endl;
    }
}

template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
    try
    {
        if (isEmpty())
            throw EmptyQueue();
        else
        {
            fr = (fr + 1)% maxQue;
            item = items[fr];

        }
    }

    catch(EmptyQueue e)
    {
        cout<<"Queue Underflow"<<endl;
    }
}
