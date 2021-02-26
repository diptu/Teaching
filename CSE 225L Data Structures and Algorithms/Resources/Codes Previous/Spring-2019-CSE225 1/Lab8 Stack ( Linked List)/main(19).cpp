#include <bits/stdc++.h>
#include "stacktype.h"
#include "stacktype.cpp"

using namespace std;

int main()
{
    cout << "Konnichiwa" << endl;

    StackType<int> st;

    if(st.IsEmpty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    st.Push(5);
    st.Push(7);
    st.Push(4);
    st.Push(2);

    if(st.IsEmpty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    if(st.IsFull())
        cout << "Stack is Full" << endl;
    else
        cout << "Stack is not Full" << endl;

    StackType<int> printer;
    while(!st.IsEmpty())
    {
        int temp = st.Top();
        printer.Push(temp);
        st.Pop();
    }
    while(!printer.IsEmpty())
    {
        int temp = printer.Top();
        cout << temp << " ";
        st.Push(temp);
        printer.Pop();
    }

    cout << endl;

    st.Push(3);

      while(!st.IsEmpty())
    {
        int temp = st.Top();
        printer.Push(temp);
        st.Pop();
    }
    while(!printer.IsEmpty())
    {
        int temp = printer.Top();
        cout << temp << " ";
        st.Push(temp);
        printer.Pop();
    }

    cout << endl;

     if(st.IsFull())
        cout << "Stack is Full" << endl;
    else
        cout << "Stack is not Full" << endl;

    st.Pop();
    st.Pop();
    cout << st.Top() << endl;

    return 0;
}
