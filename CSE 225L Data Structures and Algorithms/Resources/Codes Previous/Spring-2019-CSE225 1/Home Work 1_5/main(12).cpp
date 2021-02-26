#include <iostream>
#include "sortedtype.cpp"
#include "timestamp.cpp"
using namespace std;

int main()
{
    int a;
    int b;


    sortedtype<int> ob;
    cout<<ob.lenghts()<<endl;

    cout<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>a;
        ob.insertitem(a);


    }
    cout<<endl<<"values:"<<endl;
    for(int i=0; i<5; i++)
    {
        ob.getnextitem(b);
        cout<<b;


    }
    cout<<endl;
    int c;
    cin>>c;
    bool found=false;
    cout<<"Enter value for search :";
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
    cout<<"Enter value for search :";
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
    int r=5;
    int t=3;
timeStamp<int> ob1(r,t);
int s;
cout<<endl<<"Enter time:"<<endl;
    ob1.insertitem();
int item3;
cout<<endl<<"before delete:"<<endl;
for(int i=0; i<r; i++){

   for(int j=0; j<t; j++){

     ob1.getnextitem(i,j,item3);
     cout<<item3<<":";
   }
   cout<<endl;
}
cout<<endl;
ob1.deleteitem();
cout<<"After delete:"<<endl;
for(int i=0; i<r-1; i++){

   for(int j=0; j<t; j++){

     ob1.getnextitem(i,j,item3);
     cout<<item3<<":";
   }
   cout<<endl;
}


    cout << "Hello world!" << endl;
    return 0;
}
