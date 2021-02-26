#include <iostream>
#include"binarysearchtree.cpp"
using namespace std;

int main()
{
    TreeType<int> t1;

    if(t1.IsEmpty())
        cout<<"Tree is Empty"<<endl;
    else
        cout<<"Tree is not Empty"<<endl;


    t1.InsertItem(4);
    t1.InsertItem(9);
    t1.InsertItem(2);
    t1.InsertItem(7);
    t1.InsertItem(3);
    t1.InsertItem(11);
    t1.InsertItem(17);
    t1.InsertItem(0);
    t1.InsertItem(5);
    t1.InsertItem(1);

    if(t1.IsEmpty())
        cout<<"Tree is Empty"<<endl;
    else
        cout<<"Tree is not Empty"<<endl;

        cout<<t1.LengthIs()<<endl;

        int n1 = 9;
        bool f1=false;
        t1.RetrieveItem(n1,f1);

        if(f1 == true)
            cout<<"Item is found"<<endl;
        else
            cout<<"Item is not found "<<endl;

        int n2 = 13;
        bool f2=false;
        t1.RetrieveItem(n2,f2);

        if(f2 == true)
            cout<<"Item is found"<<endl;
        else
            cout<<"Item is not found "<<endl;

}
