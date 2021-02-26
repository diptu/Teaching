template<class T> SinglyLinkedListWithTail<T>::SinglyLinkedListWithTail()
{
    cout<<"In SinglyLinkedListWithTail constructor"<<endl;
    tail=NULL;
}

template<class T> SinglyLinkedListWithTail<T>::~SinglyLinkedListWithTail()
{
    cout<<"In SinglyLinkedListWithTail destructor"<<endl;
    tail=NULL;
}

template<class T> void SinglyLinkedListWithTail<T>::insertAtStart(T value)
{
    node<T> *temp=new node;
    temp->data=value;
    temp->next=NULL;
    if(this->head==NULL) {
        this->head=tail=temp;
        temp=NULL;
    }
    else{
        temp->next=this->head;
        this->head=temp;
    }
    this->length++;
    this->curptr=this->head;
}

template<class T>
void SinglyLinkedListWithTail<T>::insertAtEnd(T value)
{
    node<T> *temp=new node;
    temp->data=value;
    temp->next=NULL;
    if(this->head==NULL) {
        this->curptr=this->head=tail=temp;
        temp=NULL;
    }
    else {
        tail->next=temp;
        tail=temp;
    }
    (this->length)++;
}

template<class T>
void SinglyLinkedListWithTail<T>::deleteEnd()
{
    if(this->isEmpty())throw ListEmpty();

    if(this->length==1)
    {
        this->deleteStart();
        return;
    }

    node<T> *pre,*cur=this->head;
    while(cur->next!=NULL)
    {
        pre=cur;
        cur=cur->next;
    }
        tail=pre;
    pre->next=NULL;
    delete cur;
    (this->length)--;
}

