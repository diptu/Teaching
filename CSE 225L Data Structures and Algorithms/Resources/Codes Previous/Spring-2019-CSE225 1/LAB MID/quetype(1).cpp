#include "quetype.h"

#include <iostream>

using namespace std;
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

  return (rear == front);
}
template<class ItemType>

bool QueType<ItemType>::IsFull()
{
return ((rear+1)%maxQue == front);

}
template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{ try{
if (IsFull())
    throw FullQueue();
  else
  {
    rear = (rear +1) % maxQue;
    items[rear] = newItem;
  }

}
    catch(FullQueue f)
    {

        cout<<"Queue Overflow"<<endl;

    }
}

template<class ItemType>
void QueType<ItemType>::reversed(int k)
{int a=k-1;
int b=maxQue;
   int temp[maxQue];
   for(int i=0;i<=maxQue;i++)
    {
      temp[i]=items[i];
    }

    for(int i=0;i<=k;i++)
    {b--;
       items[b]=temp[a];



    }


}
template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{ try{
    if (IsEmpty())
        throw EmptyQueue();
    else
    {
        front = (front + 1)% maxQue;
        item = items[front];
}
}
catch(EmptyQueue e)
    {

        cout<<"Queue Underflow"<<endl;

    }
}
