#include "stacktype.h"
#include "stacktype.cpp"

using namespace std;

int main()
{
    StackType<int> St;
    if(St.IsEmpty())
        cout << "Stack is Empty" << endl;
    St.Push(5);
    St.Push(7);
    St.Push(4);
    St.Push(2);

    if(!St.IsEmpty())
        cout << "Stack is not Empty" << endl;

    if(St.IsFull())
        cout << "Stack is Full" << endl;
    else
        cout << "Stack is not Full" << endl;

    St.Push(3);

    StackType<int> printer;
    for(int i=0;i<MAX_ITEMS;i++) {
        int x = St.Top();
        printer.Push(x);
        St.Pop();
    }
    cout << endl;
    for(int i=0;i<MAX_ITEMS;i++) {
        int x = printer.Top();
        cout << x  << " ";
        St.Push(x);
        printer.Pop();
    }
    cout << endl;

    if(St.IsFull())
        cout << "Stack is Full" << endl;
    else
        cout << "Stack is not Full" << endl;

        St.Pop();
        St.Pop();
        cout << St.Top() << endl;

        int len = s.length();
        int ans_printed = 0;

        StackType<char>strst;
        for(int i=0;i<len;i++) {
            if(s[i]=='(') {
                strst.Push(s[i]);
            }
            else {
                if(strst.IsEmpty())
            {
                cout << "Not Balanced" << endl;
                ans_printed =1;
                break;
            }
            char x = strst.Top();
            if(x == '(') {
                strst.Pop();
            }
            }
        }
        if(strst.IsEmpty() && ans_printed==0)
            cout << "Balanced" << endl;
        else if(!strst.IsEmpty() && ans_printed==0)
            cout << "Not Balanced" << endl;


    return 0;
}
