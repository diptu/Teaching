#include <iostream>
#include "QueueType.h"
#include "StackType.h"
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
  return (rear ==  front );
}

template<class ItemType>
bool QueType<ItemType>::IsFull()
{
    return ((rear+1)%maxQue == front);
}

template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
    if  (IsFull())
    throw FullQueue();
      else
   {
    rear = (rear +1)% maxQue;
    items[rear] = newItem;
   }
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



template<class ItemType>
void QueType<ItemType>:: reverseQueueFirstKElements(int k, queue<int>& Queue)
{
    if (Queue.empty() == true || k > Queue.size())
        return;
    if (k <= 0)
        return;

    stack<int> Stack;


    for (int i = 0; i < k; i++) {
        Stack.push(Queue.front());
        Queue.pop();
    }

    while (!Stack.empty()) {
        Queue.push(Stack.top());
        Stack.pop();
    }

    for (int i = 0; i < Queue.size() - k; i++) {
        Queue.push(Queue.front());
        Queue.pop();
    }


    }

template<class ItemType>
void  QueType<ItemType>:: Print(queue<int>& Queue)
{
    while (!Queue.empty()) {
        cout << Queue.front() << " ";
        Queue.pop();
    }
}
