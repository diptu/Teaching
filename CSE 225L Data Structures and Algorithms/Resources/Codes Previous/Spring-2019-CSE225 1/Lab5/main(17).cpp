#include <iostream>
#include "sortedtype.cpp"
using namespace std;

int main()
{
    int a;
    int b;

    sortedtype<int> ob;
    cout<<ob.lenghts()<<endl;

    cout<<" ";
    for(int i=0; i<5; i++)
    {
        cin>>a;
        ob.insertitem(a);


    }
    for(int i=0; i<5; i++)
    {
        ob.getnextitem(b);
        cout<<b;


    }
    cout<<endl;
    int c;
    cin>>c;
    bool found=false;
    ob.retriveitem(c,found);
    if(found)
    {
        cout<<endl<<"found"<<endl;

    }

    else
    {

        cout<<endl<<"not found"<<endl;
    }
    cin>>c;
    found=false;
    ob.retriveitem(c,found);
    if(found)
    {
        cout<<endl<<"found"<<endl;

    }

    else
    {

        cout<<endl<<"not found"<<endl;
    }
    if(ob.isfull())
    {

        cout<<endl<<"list is full"<<endl;

    }
    else
    {

        cout<<endl<<"list is not full"<<endl;


    }
    ob.resetlist();
    ob.deleteitem(1);

    for(int i=0; i<4; i++)
    {
        ob.getnextitem(b);
        cout<<b;


    }
    if(ob.isfull())
    {

        cout<<endl<<"list is full"<<endl;

    }
    else
    {

        cout<<endl<<"list is not full"<<endl;


    }


    cout << "Hello world!" << endl;
    return 0;
}
