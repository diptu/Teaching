#include "QueType.h"
using namespace std;
#include <iostream>
template<class ItemType>
QueType<ItemType>::QueType(int max)
{
    maxQue = max + 1;
    front = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];
    front = maxQue - 1;
    rear = maxQue
           - 1;
    items = new ItemType[maxQue];
}
template<class ItemType>
QueType<ItemType>::~QueType(
)
{
    delete [] items;
}
template<class ItemType>
void QueType<ItemType>::MakeEmpty()
{
    front = maxQue - 1;
    rear = maxQue - 1;
}
template<class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    return (rear == front);
}
template<class ItemType>
bool QueType<ItemType>::IsFull()
{
    return ((rear+1)%maxQue == front);
}
template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
    try
    {
        if (IsFull())
            throw FullQueue();

        else
        {
            rear = (rear +1) % maxQue;
            items[rear] = newItem;
        }
    }
    catch(FullQueue)
    {
        cout<<"queue overflow"<<endl;
    }

}
template<class ItemType>
void QueType<ItemType>::Dequeue()
{
    try
    {
        if (IsEmpty())
            throw EmptyQueue();
        else
        {
            front = (front+1)% maxQue;
        }
    }
    catch(EmptyQueue)
    {
        cout<<"queue underflow"<<endl;
    }
    f--;
}
template<class ItemType>
void QueType<ItemType>::Print()
{
    for(int i=0; i<f; i++)
    {
        cout<<items[i]<<endl;
    }
}
