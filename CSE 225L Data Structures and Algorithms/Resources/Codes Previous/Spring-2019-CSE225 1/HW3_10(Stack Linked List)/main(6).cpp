#include <iostream>
#include <string>
#include "StackType.cpp"
using namespace std;

bool IsOperand(char ch)
{
    if ((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        return true;
    }
    return false;
}

bool IsOperator(char C)
{
    if (C == '+' || C == '-' || C == '*' || C == '/' || C == '^') {
        return true;
    }
    return false;
}
bool IsLeftParenthesis(char ch)
{
    if (ch == '(') {
        return true;
    }
    return false;
}

bool IsRightParenthesis(char ch)
{
    if (ch == ')') {
        return true;
    }
    return false;
}

bool Flag(char ch)
{
    if (!IsOperand(ch) || !IsOperator(ch) || !IsLeftParenthesis(ch) || !IsRightParenthesis(ch)) {
        return false;
    }
    return true;
}

int IsRightAssociative(char op)
{
    if (op == '^') {
        return true;
    }
    return false;
}

int GetOperatorWeight(char op)
{
    int weight = -1;
    switch (op) {
        case '+':
        case '-':
            weight = 1;
            break;
        case '*':
        case '/':
            weight = 2;
            break;
        case '^':
            weight = 3;
            break;
    }
    return weight;
}

bool HasHigherPrecedence(char op1, char op2)
{
    int op1Weight = GetOperatorWeight(op1);
    int op2Weight = GetOperatorWeight(op2);


    if (op1Weight == op2Weight) {
        if (IsRightAssociative(op1)) {
            return false;
        }
        else {
            return true;
        }
    }
    return op1Weight > op2Weight ? true : false;
}

string InfixToPostfix(string expression)
{
    StackType<char> S;
    string postfix = " ";
    for (auto& elem : expression) {
        if (Flag(elem)) {
            continue;
        }
        else if (IsOperator(elem))
        {
            while (!S.isEmpty() && S.Top() != '(' && HasHigherPrecedence(S.Top(), elem)) {
                postfix += S.Top();
                S.pop();
            }
            S.push(elem);
        }
        else if (IsOperand(elem)) {
            postfix += elem;
        }
        else if (elem == '(') {
            S.push(elem);
        }
        else if (elem == ')') {
            while (!S.isEmpty() && S.Top() != '(') {
                postfix += S.Top();
                S.pop();
            }
            S.pop();
        }
    }

    while (!S.isEmpty()) {
        postfix += S.Top();
        S.pop();
    }

    return postfix;
}

int main()
{
    StackType<int> st;

    if (st.isEmpty())
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty"<<endl;

    st.push(5);
    st.push(7);
    st.push(4);
    st.push(2);

    if (st.isEmpty())
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty"<<endl;

    if (st.isFull())
        cout<<"Stack is Full"<<endl;
    else
        cout<<"Stack is not Full"<<endl;

    StackType<int> st1;

    while (st.isEmpty() != true )
    {
        st1.push(st.Top());
        st.pop();
    }

    while (st1.isEmpty() != true )
    {
        cout<<st1.Top()<<" ";
        st.push(st1.Top());
        st1.pop();
    }
    cout<<endl;

    st.push(3);

    StackType<int> st2;
    while (st.isEmpty() == false)
    {
        st2.push(st.Top());
        st.pop();
    }

    while (st2.isEmpty() == false)
    {
        cout<<st2.Top()<<" ";
        st.push(st2.Top());
        st2.pop();
    }
    cout<<endl;

    if (st.isFull())
        cout<<"Stack is Full"<<endl;
    else
        cout<<"Stack is not Full"<<endl;

    st.pop();
    st.pop();

    cout<<st.Top()<<endl;

    string expression = "(5 + 3)*12/3)";
    string postfix = InfixToPostfix(expression);
    cout << "Output = " <<postfix<< "\n";



}