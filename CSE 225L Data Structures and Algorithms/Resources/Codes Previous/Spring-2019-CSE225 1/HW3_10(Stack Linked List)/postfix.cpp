#include "PostFix.h"
#include <iostream>
using namespace std;
template <class ItemType>
PostFix<ItemType>::PostFix()
{
    topPtr=NULL;
}
template <class ItemType>
PostFix<ItemType>::~PostFix()
{
    Node* tempPtr;
    while(!isEmpty())
    {
        tempPtr=topPtr;
        topPtr=topPtr->next;
        delete tempPtr;
    }
}
template <class ItemType>
bool PostFix<ItemType>::isEmpty()
{
    return (topPtr==NULL);
}
template <class ItemType>
bool PostFix<ItemType>::isFull()
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
void PostFix<ItemType>::push(ItemType item)
{
    if(isFull())
        throw FullStack();

    Node* tempPtr=new Node;
    tempPtr->data=item;
    tempPtr->next=topPtr;
    topPtr=tempPtr;
}
template <class ItemType>
void PostFix<ItemType>::pop()
{
    if(isEmpty())
        throw EmptyStack();

    Node* location = topPtr;
    topPtr=topPtr->next;
    delete location;
}
template <class ItemType>
ItemType PostFix<ItemType>::top()
{
    return topPtr->data;
}
template <class ItemType>
int PostFix<ItemType>::prec(ItemType ch)
{
    if(ch=='+' || ch=='-')
        return 1;
    else if(ch== '*' || ch=='/')
        return 2;
    else return -1;
}
template <class ItemType>
ItemType PostFix<ItemType>::eval(char op,ItemType val1,ItemType val2)
{
    	ItemType result;
	switch(op)
               {
                   case '+' : result=val1+val2;
                   break;
                   case '-' : result=val1-val2;
                   break;
                   case '*' : result=val1*val2;
                   break;
                   case '/' : result=val1/val2;
                   break;
               }
}

