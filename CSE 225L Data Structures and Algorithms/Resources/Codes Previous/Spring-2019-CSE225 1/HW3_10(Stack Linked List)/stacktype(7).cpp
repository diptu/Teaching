#include "stacktype.h"
#include <iostream>
using namespace std;

template <class ItemType>
StackType<ItemType>::StackType()
{
    topPtr=NULL;
}

template <class ItemType>
StackType<ItemType>::~StackType()
{
    Node* temp;
    while(!isEmpty())
    {
        temp=topPtr;
        topPtr=topPtr->next;
        delete temp;
    }
}

template <class ItemType>
bool StackType<ItemType>::isEmpty()
{
    return (topPtr==NULL);
}

template <class ItemType>
bool StackType<ItemType>::isFull()
{
    Node* location;
    try
    {
        location= new Node;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}

template <class ItemType>
void StackType<ItemType>::push(ItemType item)
{
    if(isFull())
        throw FullStack();

    Node* temp=new Node;
    temp->data=item;
    temp->next=topPtr;
    topPtr=temp;
}

template <class ItemType>
void StackType<ItemType>::pop()
{
    if(isEmpty())
        throw EmptyStack();

    Node* temp = topPtr;
    topPtr=topPtr->next;
    delete temp;
}
template <class ItemType>
ItemType StackType<ItemType>::top()
{
    return topPtr->data;
}
template <class ItemType>
int StackType<ItemType>::priority(ItemType ch)
{
    if(ch=='+' || ch=='-')
        return 1;
    else if(ch== '*' || ch=='/')
        return 2;
    else if(ch=='^')
        return 3;
    else return -1;
}
