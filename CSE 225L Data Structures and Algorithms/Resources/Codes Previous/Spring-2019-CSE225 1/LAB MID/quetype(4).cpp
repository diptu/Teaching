#include "quetype.h"


template<class ItemType>
QueType<ItemType>::QueType(int Max)
{
    maxQue = Max + 1;
    Front = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];

}

template<class ItemType>
void QueType<ItemType>::Reverse(int num)
{
    StackType<ItemType>st;
    QueType<ItemType>q;
    for(int i=0;i<num;i++) //
    {
        ItemType temp;
        Dequeue(temp);
        st.Push(temp);
    }

    for(;!IsEmpty();)
    {
        ItemType temp;
        Dequeue(temp);
        q.Enqueue(temp);
    }

    for(;!st.IsEmpty();)
    {
        Enqueue(st.Top());
        st.Pop();
    }
    for(;!q.IsEmpty();)
    {
        ItemType temp;
        q.Dequeue(temp);
        Enqueue(temp);
    }

}

template<class ItemType>
QueType<ItemType>::QueType()
{
    maxQue=501;
    Front=maxQue-1;
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
    Front = maxQue - 1;
    rear = maxQue - 1;
}

template<class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    //write the code
    return (rear==Front);

}


template<class ItemType>

bool QueType<ItemType>::IsFull()
{
    //write the code
    return ((rear+1)%maxQue == Front);

}
template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
    try{
        if (IsFull())
        throw FullQueue();
    else
        {
            rear = (rear + 1) % maxQue;
            items[rear] = newItem;
        }
    }
    catch(FullQueue obj)
    {
        cout << "Queue Overflow!\n";
    }

}

template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType &item)
{
    try
    {
        if (IsEmpty())
            throw EmptyQueue();
        else
        {
            Front = (Front + 1)% maxQue;
            item = items[Front];
        }
    }

    catch(EmptyQueue obj)
    {
        cout << "Queue Underflow\n";
    }
}
