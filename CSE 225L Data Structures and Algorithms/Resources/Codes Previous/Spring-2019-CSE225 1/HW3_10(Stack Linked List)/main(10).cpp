#include <iostream>
#include "postfix.h"
#include "postfix.cpp"

using namespace std;

int main()
{
    char in[100];
    char po[100];
    PostFix<char> P1;
    PostFix<int>P2;
    int i=0,j=0,res;
    int m,n;
    char ch;
    cout<<"Enter the infix expression:";
    cin>>in;

    for(i=0;in[i]!=NULL;i++)
    {
        if(in[i]>='1' && in[i]<='9')
        {
            po[j]=in[i];
            j++;
        }

        else
        {
            while(!P1.isEmpty() && P1.prec(in[i])<=P1.prec(P1.top()))
            {
                po[j]=P1.top();
                j++;
                P1.pop();
            }
            P1.push(in[i]);
        }
    }

        while(!P1.isEmpty())
        {
            po[j]=P1.top();
            j++;
            P1.pop();
        }

        cout<<po<<endl;


        for(i=0;po[i]!=NULL;i++)
        {
            ch=po[i];
            if(isdigit(ch))
                P2.push(ch - '0');

            else
            {
               m=P2.top();
               P2.pop();
               n=P2.top();
               P2.pop();
               res=P2.eval(ch,m,n);
               P2.push(res);
            }

        }
        cout<<P2.top();
    return 0;
}

