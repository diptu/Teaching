#include<iostream>
#include"StackType.cpp"
using namespace std;

int main()
{
    StackType<int> st ;

    if(st.IsEmpty()== true)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
                cout<<"Stack is not empty"<<endl;

    }
    try{
         st.Push(5);
         st.Push(7);
         st.Push(4);
         st.Push(2);

    }
    catch(class FullStack)
    {
        cout<<"Stack is full"<<endl;
    }

    if(st.IsEmpty()== true)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
                cout<<"Stack is not empty"<<endl;

    }

    if(st.IsFull()== true)
    {
        cout<<"Stack is full"<<endl;
    }
    else
    {
                cout<<"Stack is not full"<<endl;

    }

     try{
         st.Push(3);

    }

    catch(class FullStack)
    {
        cout<<"Stack is full"<<endl;
    }



    if(st.IsFull()== true)
    {
        cout<<"Stack is full"<<endl;
    }
    else
    {
                cout<<"Stack is not full"<<endl;

    }

    StackType<int> st2;

    for(int i=0;i<5;i++)
    {
        st2.Push(st.Top());
        st.Pop();
    }

    for(int i=0;i<5;i++)
    {
        cout<<st2.Top()<<endl;
        st.Push(st2.Top());
        st2.Pop();
    }



    char ch [2] = {'(',')'};
    if(isBalanced() == true)
    {
        cout<<"Balanced"<<endl;
    }
    else
    {
        cout<<"Not balanced"<<endl;
    }









}



bool isBalanced(char s[])
{
    StackType<char> st;
    for (int i=0;s[i]!=NULL;i++)
    {
        if (s[i]=='(')
        {
            st.Push(s[i]);
        }

        else if(s[i]==')')
        {
            if(st.IsEmpty())
                return false;
            st.Pop();
        }
    }
    if(st.IsEmpty())
        return true;
    else
        return false;
}


