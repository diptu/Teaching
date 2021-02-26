#include "StackType.h"

template<class ItemType>
StackType<ItemType>::StackType() {
    top = -1;
}
template<class ItemType>
bool StackType<ItemType>::IsEmpty() {
    return (top == -1);
}
template<class ItemType>
bool StackType<ItemType>::IsFull() {
    return (top == (MAX_ITEMS - 1));
}
template<class ItemType>
void StackType<ItemType>::Push(ItemType newItem) {
    try {
        if(IsFull()) {
            throw FullStack();
        }
        top++;
        items[top] = newItem;
    } catch(FullStack f) {
        cout << "Stack is Full" << endl;
    }
}
template<class ItemType>
void StackType<ItemType>::Pop() {
    try {
        if(IsEmpty()) {
            cout << "Stack is Empty" << endl;
        }
        top--;
    } catch(EmptyStack e) {
        cout << "Stack is Empty" << endl;
    }
}
template<class ItemType>
ItemType StackType<ItemType>::Top() {
    ItemType temp;

    temp = items[top];
    return temp;
}
