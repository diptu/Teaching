#include "stacktype.h"
#include "stacktype.cpp"
#include<iostream>
using namespace std;

 int main()
{
    StackType<int> st;
    if(st.IsEmpty()){
        cout<<"stack is empty"<<endl;
    };
    cout<<"type items"<<endl;
    for(int i=0;i<4;i++)
    {
        int b;
        cin>>b;
        st.Push(b);
    }
    if(st.IsEmpty())
        cout<<"stack is empty"<<endl;
        else
            cout<<"stack is not empty"<<endl;
    if(st.IsFull())
        cout<<"stack is full"<<endl;
        else
            cout<<"stack is not full"<<endl;

    st.print();
    st.Push(3);

if(st.IsFull())
        cout<<"stack is full"<<endl;
        else
            cout<<"stack is not full"<<endl;

}
