#include "quetype.h"
#include <iostream>

using namespace std ;

template <class ItemType>
QueType<ItemType>::QueType()
{
  front = NULL;
  rear = NULL;
}

template <class ItemType>
bool QueType<ItemType>::IsEmpty()
{
  return (front == NULL);
}


int QueType:: Min (int coinList[] , int n , int value ) {
    int coins [value+1] ;
    if (value == 0) return 0;

    coins [0] = 0 ;
    for(int i = 1 ; i <= value ; i++ ) {
        coins[i] = INT_MAX ;     // filling up with arbitrary big number
    }
     int tempCoins ;
    for (int i = 1 ; i <= value ; i++) {  // value =11
        for (int j = 0 ;j<n ; j++){    // n==4
            if (coinList[j]<=i)
                tempCoins = coins [i-coinList[j]];
            if (tempCoins != INT_MAX && tempCoins+1< coins[i])
                coins [i] = tempCoins +1 ;
        }
    }
        return coins [value] ;
}

template<class ItemType>
bool QueType<ItemType>::IsFull()
{
  NodeType* location;
  try
  {
    location = new NodeType;
    delete location;
    return false;
  }
  catch(bad_alloc& exception)
  {
    return true;
  }
}


template <class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
  if (IsFull())
    throw FullQueue();
  else
  {
    NodeType* newNode = new NodeType;
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
void QueType<ItemType>::Dequeue(ItemType& item)
{
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
void QueType<ItemType>::MakeEmpty()
{
  NodeType* tempPtr;

  while (front != NULL)
  {
    tempPtr = front;
    front = front->next;
    delete tempPtr;
  }
  rear = NULL;
}

template <class ItemType>
QueType<ItemType>::~QueType()
{
  MakeEmpty();
}

