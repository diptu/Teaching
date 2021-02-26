#include "StackType.h"
#include "StackType.cpp"


bool IsBalanced(char s[])
{
    StackType<char> st;
    //int length = s.length();

    for(int i = 0; s[i] != NULL; i++){
        if(s[i] == '('){
            st.Push(s[i]);
        }
        else if(s[i] == ')'){
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
    cout << "lab06_Stack_01" << endl;


    // create a stack of integers
    StackType<int> st1;

    // if the the stack is empty
    cout << "\nIs the st Stack Empty? ";
    if(st1.IsEmpty()){
        cout << "Stack is Empty" << endl;
    }
    else{
        cout << "Stack is not Empty" << endl;
    }

    // push 4 items
    int num1;
    cout << "\nPush 4 items: ";
    for(int i = 0; i < 4; i++){
        cin >> num1;
        st1.Push(num1);
    }

    // if the the stack is empty
    cout << "\nIs the st Stack Empty? ";
    if(st1.IsEmpty()){
        cout << "Stack is Empty" << endl;
    }
    else{
        cout << "Stack is not Empty" << endl;
    }

    // if the the stack is full
    cout << "\nIs the st Stack Full? ";
    if(st1.IsFull()){
        cout << "Stack is Full" << endl;
    }
    else{
        cout << "Stack is not Full" << endl;
    }

    // print the st stack
    cout << "Print stack: ";

    StackType<int> st2;

    for(int i = 0; i < 4; i++){
        int x = st1.Top();
        st2.Push(x);
        st1.Pop();

    }
    for(int i = 0; i < 4; i++){
        int x = st2.Top();
        cout << " " << x;
        st1.Push(x);
        st2.Pop();
    }

    // push another item
    cout << "\nPush another item: ";
    cin >> num1;
    st1.Push(num1);

    // print the st stack
    cout << "Print the values in stack: ";
    StackType<int> st3;

    for(int i = 0; i < 4; i++){
        int x = st1.Top();
        st3.Push(x);
        st1.Pop();

    }
    for(int i = 0; i < 4; i++){
        int x = st3.Top();
        cout << " " << x;
        st1.Push(x);
        st3.Pop();
    }


    // if the the stack is full
    cout << "\nIs the st Stack Full? ";
    if(st1.IsFull()){
        cout << "Stack is Full" << endl;
    }
    else{
        cout << "Stack is not Full" << endl;
    }

    // pop 2 items
    st1.Pop();
    st1.Pop();

    // print top item
    cout << "\nTop item of st1: " << st1.Top() << endl;

    StackType<char> st4;
    char var[10];
    for(int i = 0; i<4; i++){
        cin >> var;


    if(IsBalanced(var)){
        cout << "\nBalanced" << endl;
    }
    else{
        cout << "\nNot Balanced";
    }
    }

    return 0;
}
