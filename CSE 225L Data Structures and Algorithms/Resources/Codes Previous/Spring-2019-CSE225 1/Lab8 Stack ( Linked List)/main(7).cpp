#include<iostream>
#include"stacktype.cpp"
using namespace std;

int main()
{
  StackType <int> st;
  bool t = st.IsEmpty();
  if(t!=false)
    cout<<"Stack is Empty"<<endl;
  else cout<<"Stack is not empty"<<endl;

    st.Push(5);
    st.Push(7);
    st.Push(4);
    st.Push(2);
 if(st.IsEmpty())
    cout<<"Stack is empty"<<endl;

    else cout<<"Stack is not empty"<<endl;

    if(st.IsFull())
        cout<<"Stack is full"<<endl;
    else cout<<"Stack is not full"<<endl;

     StackType<int> st2;

    while(st.IsEmpty() != true)
    {
        st2.Push(st.Top());
        st.Pop();
    }

    while(st2.IsEmpty() != true)
    {
        cout<<st2.Top()<<" ";
        st.Push(st2.Top());
        st2.Pop();
    }
    cout<<endl;

    st.Push(3);

     StackType<int> st3;

    while(st.IsEmpty() != true)
    {
        st3.Push(st.Top());
        st.Pop();
    }

    while(st3.IsEmpty() != true)
    {
        cout<<st3.Top()<<" ";
        st.Push(st3.Top());
        st3.Pop();
    }
    cout<<endl;

    if(st.IsFull())
    {
        cout<<"Stack is full"<<endl;
    }
    else
    {
        cout<<"Stack is not full"<<endl;
    }

    st.Pop();
    st.Pop();

    cout<<st.Top()<<endl;

}
