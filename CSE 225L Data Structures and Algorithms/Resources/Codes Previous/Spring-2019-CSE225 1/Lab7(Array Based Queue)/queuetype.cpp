#include "queuetype.h"
#include <iostream>
using namespace std;

template<class ItemType>
QueueType<ItemType>::QueueType() {
    maxQue = 501;
    front = maxQue - 1;
    rear = maxQue -1;
    items = new ItemType[maxQue];
}
template<class ItemType>
QueueType<ItemType>::QueueType(int max) {
    maxQue = max + 1;
    front = maxQue - 1;
    rear = maxQue -1;
    items = new ItemType[maxQue];
}
template<class ItemType>
QueueType<ItemType>::~QueueType() {
    delete [] items;
}
template<class ItemType>
void QueueType<ItemType>::MakeEmpty() {
    front = maxQue - 1;
    rear = maxQue -1;
}
template<class ItemType>
bool QueueType<ItemType>::IsEmpty() {
    return (front == rear);
}
template<class ItemType>
bool QueueType<ItemType>::IsFull() {
    return ((rear + 1) % maxQue == front);
}
template<class ItemType>
void QueueType<ItemType>::Enqueue(ItemType newItem) {
    try {
        if(IsFull()) {
            throw FullQueue();
        } else {
            rear = (rear + 1) % maxQue;
            items[rear] = newItem;
        }
    } catch(FullQueue f1) {
        cout << "Queue Overflow" << endl;
    }

}
template<class ItemType>
void QueueType<ItemType>::Dequeue(ItemType& item) {
    try {
        if(IsEmpty()) {
            throw EmptyQueue();
        } else {
            front = (front + 1) % maxQue;
            item = items[front];
        }
    } catch(EmptyQueue e1) {
        cout << "Queue Underflow" << endl;
    }
}
