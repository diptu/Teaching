#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"

using namespace std;

int main()
{
    char infix[100];
    char postfix[100];
    StackType<char> S;
    StackType<int>S1;
    int i,j=0,val;
    int n1,n2;
    char ch;
    cout<<"Enter the infix expression:";
    cin>>infix;

    for(i=0;infix[i];i++)
    {
        if(infix[i]>='1' && infix[i]<='9')
        {
            postfix[j]=infix[i];
            j++;
        }
        else if(infix[i]=='(')
            S.push(infix[i]);

        else if(infix[i]==')')
        {
            while(!S.isEmpty() && S.top()!='(')
            {
                postfix[j]=S.top();
                j++;
                S.pop();
            }
            if(S.top()=='(')
                S.pop();
        }
        else
        {
            while(!S.isEmpty() && S.priority(infix[i])<=S.priority(S.top()))
            {
                postfix[j]=S.top();
                j++;
                S.pop();
            }
            S.push(infix[i]);
        }
    }

        while(!S.isEmpty())
        {
            postfix[j]=S.top();
            j++;
            S.pop();
        }

        cout<<"The postfix expression is "<<postfix<<endl;


        for(i=0;postfix[i];i++)
        {
            ch=postfix[i];
            if(isdigit(ch))
                S1.push(ch - '0');

            else
            {
               n1=S1.top();
               S1.pop();
               n2=S1.top();
               S1.pop();
               switch(ch)
               {
                   case '+' : val=n2+n1;
                   break;
                   case '-' : val=n2-n1;
                   break;
                   case '*' : val=n2*n1;
                   break;
                   case '/' : val=n2/n1;
                   break;
               }
               S1.push(val);
            }

        }
        cout<<"Result :"<<S1.top();
    return 0;
}

