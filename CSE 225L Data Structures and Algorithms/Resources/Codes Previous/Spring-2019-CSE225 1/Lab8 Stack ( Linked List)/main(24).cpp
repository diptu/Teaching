#include<iostream>
#include"stacktype.h"
#include"stacktype.cpp"

using namespace std;

int main()
{
    StackType<int>st;

    if(st.IsEmpty())
    {
        cout << "Stack is Empty" << endl;
    }else{
        cout << "Stack is not Empty" << endl;
    }

    cout << endl;

    st.Push(5);
    st.Push(7);
    st.Push(4);
    st.Push(2);

    if(st.IsEmpty())
    {
        cout << "Stack is Empty" << endl;
    }else{
        cout << "Stack is not Empty" << endl;
    }

    cout << endl;

    if(st.IsFull())
    {
        cout << "Stack is full" << endl;
    }else{
        cout << "Stack is not full" << endl;
    }

    cout << endl;

    StackType<int>ts;
    int  x;
    for(int i=0; !st.IsEmpty(); i++){
        x = st.Top();
        ts.Push(x);
        st.Pop();
    }

    for(int i=0; !ts.IsEmpty(); i++){
        x = ts.Top();
        cout << x << " ";
        st.Push(x);
        ts.Pop();
    }cout << endl;

    cout << endl;

    st.Push(3);

    for(int i=0; !st.IsEmpty(); i++){
        x = st.Top();
        ts.Push(x);
        st.Pop();
    }

    for(int i=0; !ts.IsEmpty(); i++){
        x = ts.Top();
        cout << x << " ";
        st.Push(x);
        ts.Pop();
    }cout << endl;

    cout << endl;

    if(st.IsFull())
    {
        cout << "Stack is full" << endl;
    }else{
        cout << "Stack is not full" << endl;
    }

    cout << endl;

    st.Pop();
    st.Pop();

    cout << st.Top() << endl;

    cout << endl;

    return 0;
}
