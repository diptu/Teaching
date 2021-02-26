#include "List2.h"

template<class T>
void UnsortedList<T>::insertItem(T value)
{
    this->insertAtStart(value);
}


template<class T>
void UnsortedList<T>::deleteItem(T value)
{
    if(isEmpty())throw ListEmpty();


    if(this->head->data==value){
        this->deleteStart();
        return;
    }

    node<T> *pre=NULL, *cur=(this->head);
    while(cur != NULL && cur->data != value)
    {
        pre = cur;
        cur = cur->next;
    }

    if(cur != NULL){
        pre->next = cur->next;
        delete cur;
        (this->length)--;
    }
}

template<class T>
void SortedList<T>::insertItem(T value)
{
    if(this->isEmpty() || value < (this->head)->data)
    {
        this->insertAtStart(value);
    }
    else
    {
        node<T> *temp=new node<T>;
        node<T> *pre=NULL, *cur=(this->head);
        while(cur != NULL && (cur->data) < value)
        {
            pre = cur;
            cur = cur->next;
        }

        temp->data = value;
        temp->next = cur;
        pre->next = temp;
        (this->length)++;
    }
}
