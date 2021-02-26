#include <iostream>
#include "stacktype.cpp"

using namespace std;

int main()
{
    StackType<int> st;
    int num;

    if(st.IsEmpty())
    {
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }

    for(int i=0; i<4; i++)
    {
        cin>>num;
        st.Push(num);
    }

    if(st.IsEmpty())
    {
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }

    if(st.IsFull())
    {
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

    for(int i=0; i<1; i++)
    {
        cin>>num;
        st.Push(num);
    }

    StackType<int> temp2;

    while (!st.IsEmpty()) {
    temp2.Push(st.Top());
    st.Pop();
    }
    while (!temp2.IsEmpty()) {
    cout << temp2.Top() << '\n';
    temp2.Pop();
    }
    while (!temp2.IsEmpty()) {
    st.Push(temp2.Top());
    temp.Pop();
    }

    for(int i=0; i<2; i++)
    {
        st.Pop();
    }

    return 0;
}
