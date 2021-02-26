#include "BinaryNumber.h"
#include <iostream>
using namespace std;

BinaryNumber::BinaryNumber()
{
    maxQue=501;
    front=maxQue-1;
    rear=maxQue-1;
    items = new int[maxQue];
}

BinaryNumber::BinaryNumber(int max)
{
    maxQue=max+1;
    front=maxQue-1;
    rear=maxQue-1;
    items = new int[maxQue];
}

BinaryNumber::~BinaryNumber()
{
    delete [] items;
}

void BinaryNumber::MakeEmpty()
{
    front = maxQue-1;
    rear = maxQue-1;
}

bool BinaryNumber::IsFull()
{
    return (front == (rear+1)%maxQue);
}

bool BinaryNumber::IsEmpty()
{
    return (front==rear);
}

void BinaryNumber::Enqueue(int newItem)
{
    try
    {
        if(IsFull())
            throw FullQueue();

        else
        {
            rear = (rear+1)%maxQue;
            items[rear]=newItem;
        }
    }
    catch(FullQueue f)
    {
        cout<<"Queue is full"<<endl;
    }
}

void BinaryNumber::Dequeue(int& item)
{
    try
    {
        if(IsEmpty())
            throw EmptyQueue();
        else
        {
            front = (front+1)%maxQue;
            item = items[front];
        }
    }
    catch(EmptyQueue e)
    {
        cout<<"Queue is empty"<<endl;
    }
}
