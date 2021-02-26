#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED
#include "stacktype.h"
#include "stacktype.cpp"
class FullQueue
{

};

class EmptyQueue
{

};

template <class ItemType>
class QueType
{
public:
    QueType();
    QueType(int max);
    ~QueType();
    void makeEmpty();
    bool isFull();
    bool isEmpty();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    void reverseItem(int);

private:
    ItemType* items;
    int front;
    int rear;
    int maxQue;
    StackType<ItemType> S1,S2;

};
#endif // QUETYPE_H_INCLUDED

