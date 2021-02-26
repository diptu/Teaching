/*------------------ list.cpp ---------------*/
#include "list.h"
/*
definitions of SinglyLinkedList class members
*/
template<class T>
SinglyLinkedList<T>::SinglyLinkedList()//O(1)
{
    cout<<"In SinglyLinkedList constructor"<<endl;
    head = curptr = NULL;
    length = 0;
}

template<class T>
SinglyLinkedList<T>::~SinglyLinkedList()//O(1)
{
    cout<<"In SinglyLinkedList destructor"<<endl;
    //deleteRec(head);
    while(!isEmpty()) deleteStart();
}

template<class T>
bool SinglyLinkedList<T>::isEmpty()//O(1)
{
    return head==NULL;
}

template<class T>
int  SinglyLinkedList<T>::listSize()//O(1)
{
    return length;
}

template<class T>
void SinglyLinkedList<T>::insertAtStart(T value)//O(1)
{
    if(head==NULL)
    {
        node<T>* newItem;
        newItem=new node<T>;
        newItem->data=value;
        newItem->next=NULL;
        head=newItem;
    }
}

template<class T>
void SinglyLinkedList<T>::insertAtEnd(T value)//O(N)
{
    node<T>* newNode  = new node<T>;
    newNode->data=value;
    newNode->next=NULL;
    curptr=newNode;
}

template<class T>
void SinglyLinkedList<T>::insertAtPosition(T value, int pos)//O(N)
{
    reset();
    for(int i=1;i<pos;i++)
        curptr=curptr->next;

    node<T>* temp=curptr->next;
    node<T>* newNode  = new node<T>;
    newNode->data=value;
    newNode->next=NULL;
    curptr=newNode;
    newNode=temp;
}

template<class T>
void SinglyLinkedList<T>::display()//O(N)
{
    reset();
    while(hasNext())
        cout << nextItem() << "\t";
    cout<<endl;
}

template<class T>
int SinglyLinkedList<T>::searchItem(T key)//O(N)
{
    reset();
    for(int i=1; hasNext(); i++)
    {
        if(nextItem()==key)
            return i;
    }
    return 0;
}

template<class T>
void SinglyLinkedList<T>::deleteStart()//O(1)
{
    if(isEmpty())
        throw ListEmpty();
    else
    {
       node<T> *temp=head;
       head= head->next;
       delete temp;
    }

}

template<class T>
void SinglyLinkedList<T>::deleteEnd()//O(N)
{
    if(isEmpty())
        throw ListEmpty();
    else
    {
        node<T> *temp = curptr;
        curptr=curptr->next;
        delete temp;
    }

}

template<class T>
void SinglyLinkedList<T>::deleteAtPosition(int pos)//O(N)
{
    reset();
    for(int i=1;i<pos;i++)
        curptr=curptr->next;

    node<T> *temp=curptr;
    curptr=curptr->next;
    delete temp;
}

template<class T>
int SinglyLinkedList<T>::getValue(int pos)//O(N)
{
    reset();
    for(int i=1;i<pos;i++)
        curptr=curptr->next;

    return curptr->data;
}

template<class T>
void SinglyLinkedList<T>::setValue(int pos, T val)//O(N)
{
    reset();
    for(int i=1;i<pos;i++)
        curptr=curptr->next;

    curptr->data=val;
}

template<class T>
bool SinglyLinkedList<T>::hasNext()//O(1)
{
    return curptr!=NULL;
}

template<class T>
T SinglyLinkedList<T>::nextItem()//O(1)
{
    if(isEmpty()) throw ListEmpty();

    T val = curptr->data;
    curptr = curptr->next;
    return val;
}

template<class T>
void SinglyLinkedList<T>::reset()//O(1)
{
    curptr = head;
}
