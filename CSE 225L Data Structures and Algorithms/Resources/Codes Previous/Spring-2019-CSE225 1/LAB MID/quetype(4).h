#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED

#include <iostream>
#include "stacktype.h"
using namespace std;

class FullQueue
{};

class EmptyQueue
{};

template <class ItemType>
class QueType
{
    public:
    QueType();
    QueType(int Max);
    ~QueType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType newItem);
    void Dequeue(ItemType& item);
    void Reverse(int);

    private:
    int Front;
    int rear;
    ItemType* items;
    int maxQue;
};

#endif // QUETYPE_H_INCLUDED
