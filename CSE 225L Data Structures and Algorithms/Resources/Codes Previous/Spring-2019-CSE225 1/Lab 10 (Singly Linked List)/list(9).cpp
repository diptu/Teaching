#include"list.h"

template<class T>
SinglyLinkedList<T> :: SinglyLinkedList()
{
    cout<<"in singly linked list constractor"<<endl;
    head= curptr=NULL;
    length=0;
}

template<class T>
SinglyLinkedList<T> :: ~SinglyLinkedList()
{
    cout<<"in singly linked list distractor"<<endl;
  while(!isEmpty())
 deleteStart();
}

template<class T>
bool SinglyLinkedList<T> :: isEmpty()
{
  return head==NULL;
}

template<class T>
int SinglyLinkedList<T> :: listSize()
{
  return length;
}

template<class T>
bool SinglyLinkedList<T> :: hasNext()
{
   return curptr!=NULL;
}

template<class T>
T SinglyLinkedList<T> :: nextItem()
{
   if(isEmpty())
    throw ListEmpty();

   T val= curptr->data;
   curptr= curptr->next;
   return val;

}

template<class T>
void SinglyLinkedList<T> :: reset()
{
    curptr=head;
}

template<class T>
void SinglyLinkedList<T> :: display()
{
   reset();
   while(hasNext())
    cout<<nextItem()<<"\t";
   cout<<endl;
}

template<class T>
void SinglyLinkedList<T> :: insertAtStart(T value)
{
   node<T> *temp= new node <T>;
   temp->data= value;
   temp->next= NULL;
   if(head==NULL)
   {
    head=temp;
   temp=NULL;
   }
   else
   {
       temp->next= head;
       head=temp;
   }
   length++;
   curptr=head;
}

template<class T>
void SinglyLinkedList<T> :: insertAtPosition( T value, int pos)
{
   if(pos>length+1 || pos<=0)
throw PositionOutOfBound();

    if(pos==1)
    {
        insertAtStart(value);
        return;
    }
 node<T> *pre, *cur;
 node<T> *temp= new node<T>;
 cur=head;
 for (int i=1; i<pos; i++){
    pre=cur;
    cur=cur->next;
 }
  temp->data=value;
  temp->next=temp;
  length++;

}

template<class T>
void SinglyLinkedList<T> :: insertAtEnd(T val)
{
    insertAtPosition(val, length+1);
}

template<class T>
void SinglyLinkedList<T> :: searchItem(T key)
{
   reset();
   for(int i=1; hasNext();i++)
{
    if(nextItem()==key)
        return i;
}
return 0;
}



