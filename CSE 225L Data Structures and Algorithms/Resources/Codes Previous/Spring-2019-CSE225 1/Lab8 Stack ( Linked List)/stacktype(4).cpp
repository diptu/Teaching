#include "stacktype.h"
#include <iostream>
using namespace std;

template<class T>
StackType<T>::StackType()
{
    topPtr = NULL;
}
template<class T>
bool StackType<T>::IsFull(){
    NodeType* location;
    try{
        location = new NodeType;
        delete location;
        return false;
    }
    catch(std::bad_alloc& exception){
        return true;
    }
}
template<class T>
T StackType<T>::Top(){
    return (topPtr->info);
}
template<class T>
bool StackType<T>::IsEmpty(){
    return (topPtr == NULL);
}
template<class T>
void StackType<T>::Push(T newItem){
    if(IsFull()){
        throw FullStack();
    }
    else{
        NodeType* tempPtr = new NodeType;
        tempPtr->info = newItem;
        tempPtr->next = topPtr;
        topPtr = tempPtr;
    }
}
template<class T>
void StackType<T>::Pop(){
    if(IsEmpty()){
        throw EmptyStack();
    }
    else{
        NodeType* tempPtr;

        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}
template<class T>
StackType<T>::~StackType(){
    NodeType* tempPtr;

    while(topPtr != NULL){
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}
