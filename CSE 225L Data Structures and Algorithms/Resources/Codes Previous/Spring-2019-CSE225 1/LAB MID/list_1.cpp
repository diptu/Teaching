
#include "list.h"

template<class T>
SinglyLinkedListWithTail<T>::SinglyLinkedListWithTail()
{
cout<< "In SinglyLinkedListWithTail constructor" <<endl;
tail=NULL;
}

template<class T>
SinglyLinkedListWithTail<T>::~SinglyLinkedListWithTail()
{
cout<< "In SinglyLinkedListWithTail destructor" <<endl;
tail=NULL;
}

template<class T>
void SinglyLinkedListWithTail<T>:: insertAtStart (T val) {
    node <T> *temp = new node ;
    temp->next= NULL ;
    temp->data= val ;
    if (this->head == NULL) {
        this->head = tail = temp ;
        temp = NULL ;
    }
    else {
        temp-> next = this->head ;
        this->head = temp ;
     }
     this->length ++ ;
     this->cptr = this->head ;
}

template<class T>
void SinglyLinkedListWithTail<T>:: insertAtEnd (T val ) {
    node <T> temp = new node ;
    temp->next = NULL ;
    temp->data = val ;
    if (this->head == NULL ) {
        this->cptr = this-> head =tail = temp ;
        temp = NULL ;
    }
    else {
        tail->next = temp ;  // current tail points to temp
        tail = temp ;   // current tail updated
    }
    (this->length)++ ;
}


template<class T>
void SinglyLinkedListWithTail<T>:: deleteEnd () {
    node <T> *pre , *cur = this->head;
    while (cur->next!=NULL) {  // goes up to the last one
        pre = cur ;
        cur = cur->next;
    }
    tsil = pre ;
    pre->next = NULL ;
    delete cur ;
    (this->length)--;
}

