#include <iostream>
#include "stacktype.cpp"
#include "stacktype.h"
#include<bits/stdc++.h>

using namespace std;



int prec (char c) {
    if (c== '*' || c == '/' ) return 2 ;
    else if (c == '+ ' || c == '-' ) return 1 ;
    else return -1 ;
}

void infixToPostfix (string s ) {
    StackType <char> st ;
    st.Push('N') ;
    int l = s.length () ;
    string ns ;
    for (int i = 0 ; i < l ; i++ ) {
        // for scanned char is not an operator
        if (s[i] >= 'a' && s[i] <= 'z') {
          ns+= s[i];
        }
        else if ( s[i] == '(' )
                    st.Push('(');
        //if ) , pop until we get (
        else if (s[i] == ')') {
            while (st.Top()!= 'N' && st.Top()!= '(') {
                    char c = st.Top() ; st.Pop() ;
                    ns+= c ;
                   }
                   if (st.Top() == '(') {
                        char c = st.Top() ; st.Pop()  // ?????????????????
                       }
        }
        // if operator found
        else {
            while (st.Top() != 'N' && prec(s[i]) <=prec(st.Top())) {
                char c = st.Top() ;
                st.Pop() ;
                ns+=c ;
            }
            st.Push(s[i] ) ;
        }
    }
    while (st.Top() != 'N') {
        char c = st.Top() ; st.Pop() ;
        ns+=c ;
    }
    cout<< ns << endl ;

}



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
