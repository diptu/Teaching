#include <iostream>
#include "stackType.h"
#include "stackType.cpp"

using namespace std;

int main()
{
    StackType<int> st;
    int num;

    if(st.IsEmpty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Enter the items: "<<endl;
    for(int i=0; i<4; i++)
    {
        cin>>num;
        st.Push(num);
    }

    if(st.IsEmpty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }

     if(st.IsFull()){
        cout<<"Stack is full"<<endl;
    }else{
        cout<<"Stack is not full"<<endl;
    }

    StackType<int> temp;

    while (!st.IsEmpty()) {
    temp.Push(st.Top());
    st.Pop();
    }
    while (!temp.IsEmpty()) {
    cout << temp.Top() << '\n';
    temp.Pop();
    }
    while (!temp.IsEmpty()) {
    st.Push(temp.Top());
    temp.Pop();
    }

    cout<<"Enter the item: "<<endl;
    for(int i=0; i<1; i++)
    {
		cin>>num;
		st.Push(num);
    }

    StackType<int> st2;

    while (!st.IsEmpty()) {
    st2.Push(st.Top());
    st.Pop();
    }
    while (!st2.IsEmpty()) {
    cout << st2.Top() << '\n';
    st2.Pop();
    }
    while (!st2.IsEmpty()) {
    st.Push(st2.Top());
    st2.Pop();
    }


    if(st.IsFull()){
        cout<<"Stack is full"<<endl;
    }else{
        cout<<"Stack is not full"<<endl;
    }

    for(int i=0; i<2; i++)
    {
        st.Pop();
    }

    return 0;
}
