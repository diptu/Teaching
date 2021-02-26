#include <iostream>
#include "stacktype.cpp"
#include "stacktype.h"

using namespace std;

int main()
{
   StackType<int>  s  ;
    if (s.IsEmpty()){
        cout<<"Stack is empty"<<endl ;
    }
    else
        cout<< "Stack is not Empty"<<endl;

   s.Push(5);
   s.Push(7);
   s.Push(4);
   s.Push(2);
  if (s.IsEmpty()){
        cout<<"Stack is empty"<<endl ;
    }
    else
        cout<< "Stack is not Empty"<<endl;

     if (s.IsFull()){
        cout<<"Stack is Full"<<endl ;
    }
    else
        cout<< "Stack is not Full"<<endl;

    //First Print

    StackType<int> p ;
    while (s.IsEmpty()!= true) {
        int x ;
        x=s.Top();
       // cout<< x ;
        p.Push(x);
        s.Pop();
    }
while (p.IsEmpty()!= true) {
        int x ;
        x=p.Top();
        cout<< x << " ";
        s.Push(x);
        p.Pop();
    }
    cout<<" "  << endl ;

s.Push(3);

    //Second Print
    while (s.IsEmpty()!= true) {
        int x ;
        x=s.Top();
       // cout<< x ;
        p.Push(x);
        s.Pop();
    }
while (p.IsEmpty()!= true) {
        int x ;
        x=p.Top();
        cout<< x << " ";
        s.Push(x);
        p.Pop();
    }
    cout<<" "  << endl ;

 if (s.IsFull()){
        cout<<"Stack is Full"<<endl ;
    }
    else
        cout<< "Stack is not Full"<<endl;

        s.Pop() ; s.Pop() ;
        cout<< s.Top() <<endl;







    return 0;
}
