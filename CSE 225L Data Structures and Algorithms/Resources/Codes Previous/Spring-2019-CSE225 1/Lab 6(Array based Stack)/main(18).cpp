#include "stacktype.h"
#include "stacktype.cpp"
#include <string>
#include <iostream>

using namespace std;





int main()
{
    StackType<int> st;
    StackType<int> st1;
    string str[100];


    if(st.IsEmpty())
    {
        cout << "Stack is Empty"<< endl;
    }
    else
    {
        cout << "Stack is not Empty"<< endl;
    }
    st.Push(5);
    st.Push(7);
    st.Push(4);
    st.Push(2);
    if(st.IsEmpty())
    {
        cout << "Stack is Empty"<< endl;
    }
    else
    {
        cout << "Stack is not Empty"<< endl;
    }
    if(st.IsFull())
    {
        cout << "Stack is full"<< endl;
    }
    else
    {
        cout << "Stack is not full"<< endl;
    }



    for (int i = 0 ; i<4 ; i++)
    {
        st1.Push(st.Top());
        st.Pop();
    }
    for(int i = 0 ; i<4 ; i++)
    {
        cout<<" "<<st1.Top();
        st.Push(st1.Top());
        st1.Pop();
    }
    cout<<endl;

    st.Push(3);

    if(st.IsFull())
    {
        cout << "Stack is full"<< endl;
    }
    else
    {
        cout << "Stack is not full"<< endl;
    }

    for (int i = 0 ; i<5 ; i++)
    {
        st1.Push(st.Top());
        st.Pop();
    }
    for(int i = 0 ; i<5 ; i++)
    {
        cout<<" "<<st1.Top();
        st.Push(st1.Top());
        st1.Pop();
    }
    cout<<endl;

    st.Pop();
    st.Pop();

    cout << st.Top()<<endl;









    cout << "Hello world!" << endl;
    return 0;
}
