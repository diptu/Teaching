#include "stacktype.cpp"
#include <iostream>
using namespace std;

bool isBalanced(char s[])
{
    StackType<char> st;

    for(int i=0; s[i]!=NULL; i++)
    {
        if(s[i]=='(')
            st.Push(s[i]);
        else if(s[i]==')')
        {
            if(st.IsEmpty())
                return false;
            else
               st.Pop();
        }
    }
    if(st.IsEmpty())
        return true;
    else
        return false;
}
int main()
{
    StackType<int> s;
    int i;

    if(s.IsEmpty())
        cout<<"Stack is empty."<<endl;
    else
        cout<<"Stack is not empty."<<endl;

    int temp;
    cout<<"Enter four integers: "<<endl;
    for(i=0; i<4; i++)
    {
        cin>>temp;
        s.Push(temp);
    }

    if(s.IsEmpty())
        cout<<"Stack is empty."<<endl;
    else
        cout<<"Stack is not empty."<<endl;

    if(s.IsFull())
        cout<<"Stack is full."<<endl;
    else
        cout<<"Stack is not full."<<endl;

    StackType<int> s2;
    for(i=0; i<4; i++)
    {
        s2.Push(s.Top());
        s.Pop();
    }
    cout<<endl<<"Stack: "<<endl;
    for(i=0; i<4; i++)
    {
        cout<<s2.Top()<<" ";
        s.Push(s2.Top());
        s2.Pop();
    }

    s.Push(3);

    cout<<endl;
    cout<<"New Stack: "<<endl;
    for(i=0; i<5; i++)
    {
        s2.Push(s.Top());
        s.Pop();
    }
    for(i=0; i<5; i++)
    {
        cout<<s2.Top()<<" ";
        s.Push(s2.Top());
        s2.Pop();
    }

    cout<<endl;
    if(s.IsFull())
        cout<<"Stack is full."<<endl;
    else
        cout<<"Stack is not full."<<endl;

    s.Pop();
    s.Pop();

    cout<<endl;
    cout<<"Top item after popping two items is "<<s.Top()<<endl;

    StackType<char> st;

    for(i=0; i<4; i++)
    {
        char temp[100];
        cin>>temp;
        if(isBalanced(temp))
            cout<<"Balanced";
        else
            cout<<"Not balanced";
        cout<<endl;
    }



}
