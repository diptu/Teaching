#include "queue.h"
#include "stack.h"
#include "stack.cpp"


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
void QueType<ItemType>::reverse(int k)
{
    QueType<char> q1;
    QueType<char> q2;
    StackType<char> s1;
    int num;

    if(isEmpty())
        return (EmptyQueue())
    else{
        cout>>"Enter the number of elements to reverse: "<<endl;
        cin>>num;

        q1.Dequeue(q1.front(num))
        s1.Push(num);

        q2.Enqueue(s1.Top())

        q2.Enqueue(q1.front());
    }
}
