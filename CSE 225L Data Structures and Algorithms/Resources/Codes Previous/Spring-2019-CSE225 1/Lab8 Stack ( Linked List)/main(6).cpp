#include <iostream>
#include "stacktype.cpp"
using namespace std;

int main()
{
    cout << "Lab-08_stack_linked_list" << endl;

    // create a int stack
    StackType<int> st1;

    cout << "\nif the stack is empty? ";
    if(st1.IsEmpty()){
        cout << "Stack is Empty" << endl;
    }
    else{
        cout << "Stack is not Empty" << endl;
    }

    cout << "\nPush 4 items: ";
    int num1;
    for(int i = 0; i < 4; i++){
        cin >> num1;
        st1.Push(num1);
    }

    cout << "\nif the stack is empty? ";
    if(st1.IsEmpty()){
        cout << "Stack is Empty" << endl;
    }
    else{
        cout << "Stack is not Empty" << endl;
    }

    cout << "\nif the stack is full? ";
    if(st1.IsFull()){
        cout << "Stack is Full" << endl;
    }
    else{
        cout << "Stack is not Full" << endl;
    }

    StackType<int> st2, st3;
    cout << "\nPrinting the stack: ";
    for(int i = 0; !st1.IsEmpty(); i++){
        int temp;
        temp = st1.Top();
        st1.Pop();
        st2.Push(temp);
    }
    for(int i = 0; !st2.IsEmpty(); i++){
        int temp;
        temp = st2.Top();
        cout << " " << temp;
        st2.Pop();
        st1.Push(temp);
    }

    cout << "\nPush another item: ";
    cin >> num1;
    st1.Push(num1);

    cout << "\nPrinting the stack: ";
    for(int i = 0; !st1.IsEmpty(); i++){
        int temp;
        temp = st1.Top();
        st1.Pop();
        st2.Push(temp);
    }
    for(int i = 0; !st2.IsEmpty(); i++){
        int temp;
        temp = st2.Top();
        cout << " " << temp;
        st2.Pop();
        st1.Push(temp);
    }

    cout << "\nif the stack is full? ";
    if(st1.IsFull()){
        cout << "Stack is Full" << endl;
    }
    else{
        cout << "Stack is not Full" << endl;
    }

    cout << "\nPop two items: ";
    for(int i = 0; i < 2; i++){
        st1.Pop();
    }

    cout << "\nPrint top item: ";
    int x = st1.Top();
    cout << " " << x;

    return 0;
}
