#include <bits/stdc++.h>
#include "stacktype.h"
#include "stacktype.cpp"

using namespace std;

int Order(char op){
    if(op == '+'||op == '-')
    return 1;
    if(op == '*'||op == '/')
    return 2;
    return 0;
}


int Operation(int a, int b, char op){
    switch(op){
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
}


int main() {

   string s;
   cin >> s;

    int i;
    StackType<int>V;
    StackType<char>OP;

    for(i =0; i<s.length();i++){


        if(s[i] == ' ')
            continue;


        else if(s[i] == '('){
            OP.Push(s[i]);
        }


        else if(isdigit(s[i])){
            int val = 0;


            while(i < s.length() &&
                        isdigit(s[i]))
            {
                val = (val*10) + (s[i]-'0');
                i++;
            }

            V.Push(val);
        }


        else if(s[i] == ')')
        {
            while(!OP.IsEmpty() && OP.Top() != '(')
            {
                int val2 = V.Top();
                V.Pop();

                int val1 = V.Top();
                V.Pop();

                char op = OP.Top();
                OP.Pop();

                V.Push(Operation(val1, val2, op));
            }
            OP.Pop();
        }


        else
        {

            while(!OP.IsEmpty() && Order(OP.Top())>= Order(s[i])){
                int val2 = V.Top();
                V.Pop();

                int val1 = V.Top();
                V.Pop();

                char op = OP.Top();
                OP.Pop();

                V.Push(Operation(val1,val2,op));
            }
            OP.Push(s[i]);
        }
    }


    while(!OP.IsEmpty()){
        int val2 = V.Top();
        V.Pop();

        int val1 = V.Top();
        V.Pop();

        char op = OP.Top();
        OP.Pop();

        V.Push(Operation(val1,val2,op));
    }

    if(V.IsEmpty())
         cout << "Invalid expression" << endl;
    if(OP.IsEmpty())
        cout << V.Top() << endl;
    else
        cout << "Invalid expression" << endl;

    return 0;
}
