#include <iostream>
#include "stacktype.cpp"
#include<string>
using namespace std;

bool isOperand(char ch)
{
    return ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0'&&ch<='9'));
}

int priority(char ch)
{
    if(ch=='/'||ch=='*')
        return 2;
    else if(ch=='+' || ch=='-')
        return 1;
    else
        return -1;
}

string itop(string s)
{
    StackType<char> st;
    string p="";
    int i, l;
    l=s.length();

    for(i=0; i<l; i++)
    {
        if(isOperand(s[i]))
        {
            p+=s[i];
        }

        else if(s[i]=='(')
            st.Push(s[i]);

        else if(s[i]==')')
        {
            while(!st.IsEmpty()&&st.Top()!='(')
            {
                p+=st.Top();
                st.Pop();
            }
            st.Pop();
        }
        else
        {
            while(!st.IsEmpty()&&st.Top()!='('&&priority(s[i])<=priority(st.Top()))
            {
                p+=st.Top();
                st.Pop();
            }
            st.Push(s[i]);
        }
    }

    while(!st.IsEmpty())
    {
        p+=st.Top();
        st.Pop();
    }
   return p;
}

int opcalc(int a, int b, char op)
{
    int r=0;
    switch(op)
    {
        case '+':
            r=a+b;
            break;
        case '-':
            r=a-b;
            break;
        case '*':
            r=a*b;
            break;
        case '/':
            r=a/b;
            break;
        default:
            r=0;
    }
    return r;
}

int calc(string s)
{
    StackType<char> st;
    int i, l=s.length();
    int res;
    for(i=0; i<l; i++)
    {
        if(isOperand(s[i]))
            st.Push(s[i]);
        else
        {
            st.Push(s[i]);
            char op=st.Top();
            st.Pop();

            int o1=st.Top()-'0';
            st.Pop();
            int o2=st.Top()-'0';
            st.Pop();

            if(o2>o1)
                res=opcalc(o2, o1, op);
            else
                res=opcalc(o1, o2, op);

            char rc=res+'0';
            st.Push(rc);
        }
    }
    return res;
}

int main()
{
    string in;

    cout<<"Enter an infix expression"<<endl;
    cin>>in;

    cout<<"The postfix expression is: "<<endl;
    string rp=itop(in);

    int l=rp.length();
    int count=0;
    for(int i=0; i<l; i++)
    {
        if(isOperand(rp[i]))
            count++;
        else
        {
            count--;
        }
    }
    if(count>0)
    {
        if(isOperand(rp[0])&&isOperand(rp[1]))
        {
            if(!isOperand(rp[l-1]))
            {
                cout<<rp<<endl;
                cout<<"The result is:"<<endl;
                int x=calc(rp);
                cout<<x;
            }
        }
    }
    else
        cout<<"Invalid"<<endl;
    return 0;
}
