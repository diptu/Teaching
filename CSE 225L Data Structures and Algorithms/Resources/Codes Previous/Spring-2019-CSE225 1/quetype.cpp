#include "quetype.h"
template<class ItemType>
QueType<ItemType>::QueType(int max) {

    maxQue = max + 1;
    front = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];

}
template<class ItemType>
QueType<ItemType>::QueType() {
    maxQue = 501;
    front = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];
}

template<class ItemType>
QueType<ItemType>::~QueType()
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
//write the code
}
template<class ItemType>

bool QueType<ItemType>::IsFull()
{
    //write the code
}
template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
//Write the code to insert an item in the queue
}

template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
    if (IsEmpty())
        throw EmptyQueue();
    else
    {
        front = (front + 1)% maxQue;
        item = items[front];
}
}

