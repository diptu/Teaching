#include"queuetype.h"
#include <iostream>
using namespace std;

template<class ItemType>
QueType<ItemType>::QueType(int max)
{
    maxQue=max+1;
    front=maxQue-1;
    rear=maxQue-1;
    items=new ItemType[maxQue];
}

template<class ItemType>
QueType<ItemType>::QueType()
{
    maxQue=501;
    front=maxQue-1;
    rear=maxQue-1;
    items=new ItemType[maxQue];
}

template<class ItemType>
QueType<ItemType>::~QueType()
{
    delete [] items;
}

template<class ItemType>
void QueType<ItemType>::MakeEmpty()
{
    front=maxQue-1;
    rear=maxQue-1;
}

template<class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    return (front==rear);
}

template<class ItemType>
bool QueType<ItemType>::IsFull()
{
    return (((rear+1)%maxQue==front));
}

template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
    try
    {
        if(IsFull())
            throw FullQueue();
    rear=(rear+1)%maxQue;
    items[rear]=newItem;
    }
    catch(FullQueue f)
    {
        cout<<"Queue Overflow"<<endl;
    }

}

template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
    if(IsEmpty())
        throw EmptyQueue();
    front=(front+1)%maxQue;
    item=items[front];
}


