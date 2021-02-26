#include "quetype.h"
#include <iostream>
using namespace std;


template <class ItemType>
Quetype <ItemType>::QueType(){

front = NULL;
rear = NULL;
}

template <class ItemType>
bool Quetype <ItemType>::IsEmpty(){
    return (front == NULL);

}

template <class ItemType>
bool Quetype <ItemType>::IsFull(){

    NodeType* location;
    try{
        location = new
        NodeType; delete
        location; return false;
    }
    catch(bad_alloc& exception){

            return true;
    }
}

template <class ItemType>
void Quetype <ItemType>::Enqueue(ItemType newItem){

if (IsFull())
    throw FullQueue();
  else
  {
    NodeType* newNode;

    newNode = new NodeType;
    newNode->info = newItem;
    newNode->next = NULL;
    if (rear == NULL)
      front = newNode;
    else
      rear->next = newNode;
    rear = newNode;
  }


}

template <class ItemType>
void Quetype <ItemType>::Dequeue(ItemType& item){

      if (IsEmpty())
    throw EmptyQueue();
  else
  {
    NodeType* tempPtr;

    tempPtr = front;
    item = front->info;
    front = front->next;
    if (front == NULL)
      rear = NULL;
    delete tempPtr;
  }


}

template <class ItemType>
void Quetype <ItemType>::MakeEmpty(){

        NodeType* tempPtr;
        while(front != NULL)
        {
            tempPtr = front;
            front = front->next;
            delete tempPtr;
        }
        rear  = NULL;
}

template <class ItemType>
Quetype <ItemType>::~QueType(){
        MakeEmpty();
}
