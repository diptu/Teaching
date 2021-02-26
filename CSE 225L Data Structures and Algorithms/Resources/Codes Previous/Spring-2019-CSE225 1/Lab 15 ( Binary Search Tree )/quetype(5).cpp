#include "quetype.h"
#include <iostream>
using namespace std;

template <class T>
QueType<T>::QueType() {
    front = NULL;
    rear = NULL;
}
template <class T>
bool QueType<T>::IsEmpty() {
    return (front == NULL && rear == NULL);
}
template <class T>
bool QueType<T>::IsFull() {
    NodeType* location;
    try {
        location = new NodeType;
        delete location;
        return false;
    } catch(bad_alloc& exception) {
        return true;
    }
}
template <class T>
void QueType<T>::Enqueue(T newItem) {
    if(IsFull())
        throw FullQueue();

    NodeType* temp;
    temp = new NodeType;
    temp->info = newItem;
    temp->next = NULL;

    if(rear == NULL) {
        front = temp;
        rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }
    //delete temp;
}
template <class T>
void QueType<T>::Dequeue(T& item) {
    if(IsEmpty())
        throw EmptyQueue();

    NodeType* temp;
    temp = front;
    item = temp->info;
    if(front->next == NULL) {
        front = NULL;
        rear = NULL;
    } else {
        front = front->next;
    }
    delete temp;
}
template <class T>
void QueType<T>::MakeEmpty() {
    NodeType* tempPtr;
    while(front != NULL) {
        tempPtr = front;
        front = front->next;
        delete tempPtr;
    }
    rear = NULL;
}
template <class T>
QueType<T>::~QueType() {
    MakeEmpty();
}

