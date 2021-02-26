#include "list.h"

template<class T>
SinglyLinkedList<T>::SinglyLinkedList() {
    cout << "In SinglyLinkedList constructor" << endl;
    head = curPtr = NULL;
    length = 0;
}
template<class T>
SinglyLinkedList<T>::~SinglyLinkedList() {
    cout << "In SinglyLinkedList destructor" << endl;
    while(!isEmpty()) {
        deleteStart();
    }
}
template<class T>
bool SinglyLinkedList<T>::isEmpty() {
    return (head == NULL);
}
template<class T>
int SinglyLinkedList<T>::listSize() {
    return length;
}
template<class T>
bool SinglyLinkedList<T>::hasNext() {
    return (curPtr != NULL);
}
template<class T>
T SinglyLinkedList<T>::nextItem() {
    if(isEmpty())
        throw ListEmpty();

    T val = curPtr->data;
    curPtr = curPtr->next;
    return val;
}
template<class T>
void SinglyLinkedList<T>::reset() {
    curPtr = head;
}
template<class T>
void SinglyLinkedList<T>::display() {
    reset();
    while(hasNext()) {
        cout << nextItem() << "\t";
    }
    cout << endl;
}
template<class T>
int SinglyLinkedList<T>::searchItem(T key)
{
    reset();
    for(int i = 1; hasNext(); i++){
        if(nextItem() == key)
            return i;
    }
    return 0;
}
template<class T>
void SinglyLinkedList<T>::insertAtStart(T value)
{
    node<T> *temp = new node<T>;
    temp->data = value;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
        temp = NULL;
    }
    else{
        temp->next = head;
        head = temp;
    }
    length++;
    curPtr = head;
}
template<class T>
void SinglyLinkedList<T>::insertAtPosition(T value, int pos)
{
    if(pos > length + 1 || pos <= 0)
        throw PositionOutOfBound();
    if(pos == 1){
        insertAtStart(value);
        return;
    }

    node<T> *pre, *cur;
    node<T> *temp = new node<T>;
    cur = head;
    for(int i = 1; i < pos; i++){
        temp->data = value;
        temp->next = NULL;
        pre->next = temp;
    }
    length++;
}
template<class T>
void SinglyLinkedList<T>::insertAtEnd(T val)
{
    insertAtPosition(val, length + 1);
}
template<class T>
void SinglyLinkedList<T>::deleteStart()
{
    if(isEmpty()) throw ListEmpty();

    node<T> *temp = head;
    head = head->next;
    delete temp;
    length--;
    curPtr = head;
}
template<class T>
void SinglyLinkedList<T>::deleteAtPosition(int pos)
{
    if(isEmpty()) throw ListEmpty();
    if(pos > length || pos <= 0) throw PositionOutOfBound();
    if(pos == 1){
        deleteStart();
        return;
    }

    node<T> *pre, *cur = head;
    for(int i = 1; i < pos; i++)
    {
        pre = cur;
        cur = cur->next;
    }
    pre->next = cur->next;
    delete cur;
    length--;
}
template<class T>
void SinglyLinkedList<T>::deleteEnd()
{
    deleteAtPosition(length);
}
template<class T>
int SinglyLinkedList<T>::getValue(int pos) {
    if(pos > length || pos <= 0)
        throw PositionOutOfBound();

    node<T> *cur = head;
    for(int i = 1; i < pos; i++) {
        cur = cur->next;
    }
    return cur->data;
}
template<class T>
void SinglyLinkedList<T>::setValue(int pos, T val) {
    if(pos > length || pos <= 0)
        throw PositionOutOfBound();

    node<T> *cur = head;
    for(int i = 1; i < pos; i++) {
        cur = cur->next;
    }
    cur->data = val;
}
