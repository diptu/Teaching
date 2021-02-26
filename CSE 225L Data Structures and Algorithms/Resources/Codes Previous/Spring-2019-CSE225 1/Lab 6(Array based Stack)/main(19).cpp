#include "stacktype.cpp"
#include <iostream>
using namespace std;

bool isbalanced(char s[])
{
    StackType<char>obj;

    for(int i=0; s[i]!=NULL ;i++)
    {

        if(s[i]=='(')
            obj.Push(s[i]);
        else if (s[i]==')')
            if(obj.IsEmpty())
                return false;
            else obj.Pop();

    }

    if(obj.IsEmpty())
        return true;
    else return false;
}

int main()
{
    StackType<int>obj;
    if(obj.IsEmpty())
    cout<<"Stack Empty\n";
    else cout<< "Stack is not Empty\n";

    obj.Push(5); obj.Push(7); obj.Push(4); obj.Push(2);

    if(obj.IsEmpty())
    cout<<"Stack Empty\n";
    else cout<< "Stack is not Empty\n";

    if(obj.IsFull())
    cout<<"Stack is full\n";
    else cout<< "Stack is not full\n";

    StackType<int>tempobj;

    for(;!obj.IsEmpty();obj.Pop())
    {
         tempobj.Push(obj.Top());

    }

    for(;!tempobj.IsEmpty();tempobj.Pop())
       {
        cout << tempobj.Top() << "  ";
        obj.Push(tempobj.Top());
        }


    obj.Push(3);

    cout<<endl;

    for(;!obj.IsEmpty();obj.Pop())
    {
         tempobj.Push(obj.Top());
    }

    for(;!tempobj.IsEmpty();tempobj.Pop())
       {
        cout << tempobj.Top() << "  ";
        obj.Push(tempobj.Top());
        }

    if(obj.IsFull())
        cout<<"\nStack is Full\n";

    obj.Pop(); obj.Pop();

    cout << obj.Top() <<endl;

    char inp1[100];
    cin>>inp1;
    if(isbalanced(inp1))
        cout<<"Balanced\n";
    else cout<<"Not Balanced\n";

    cin>>inp1;
    if(isbalanced(inp1))
        cout<<"Balanced\n";
    else cout<<"Not Balanced\n";


    cin>>inp1;
    if(isbalanced(inp1))
        cout<<"Balanced\n";
    else cout<<"Not Balanced\n";


    cin>>inp1;
    if(isbalanced(inp1))
        cout<<"Balanced\n";
    else cout<<"Not Balanced\n";

    return 0;
}
