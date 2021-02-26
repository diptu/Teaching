#include "stacktype.h"
#include "stacktype.cpp"
#include <bits/stdc++.h>

using namespace std;

bool IsBalanced(string);

int main()
{
    StackType<int>st;

    if(st.IsEmpty() == true){
        cout << "Stack is Empty." << endl;
    }else{
        cout << "Stack is not Empty." << endl;
    }

    st.Push(5);
    st.Push(7);
    st.Push(4);
    st.Push(2);

    cout << endl;

    if(st.IsEmpty() == true){
        cout << "Stack is Empty." << endl;
    }else{
        cout << "Stack is not Empty." << endl;
    }

    cout << endl;

    if(st.IsFull() == true){
        cout << "Stack is Full." << endl;
    }else{
        cout << "Stack is not Full." << endl;
    }

    cout << endl;

    StackType<int>ts;
    int x;
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

    if(st.IsFull() == true){
        cout << "Stack is Full." << endl;
    }else{
        cout << "Stack is not Full." << endl;
    }

    cout << endl;

    st.Pop();
    st.Pop();
    x = st.Top();
    cout << x << endl;

    cout << endl;

    string s;
    getline(cin,s);

    if(IsBalanced(s) == true){
        cout << "Balanced." << endl;
    }else{
        cout << "Not balanced." << endl;
    }

    return 0;
}

bool IsBalanced(string s)
{
    int len = s.size();
    StackType<char>pt;

    for(int i=0; i<len; i++)
    {
        if(s[i] == '('){
            pt.Push(s[i]);
        }else{
            if(pt.IsEmpty()){ return false; }
            pt.Pop();
        }
    }
    return pt.IsEmpty();
}
