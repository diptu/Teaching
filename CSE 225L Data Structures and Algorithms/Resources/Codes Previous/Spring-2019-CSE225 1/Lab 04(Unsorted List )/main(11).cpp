
#include <iostream>
#include "unsortedtype.cpp"
#include "studentinfo.H"
using namespace std;

int main()
{
    unsortedtype<int> ob;
    studentInfo ob1;


int a=4;
    for(int i=0;i<a;i++){

            int b;
            cin>>b;
    ob.InsertItem(b);
    }

ob.print();
ob.ResetList();
ob.InsertItem(1);
ob.print();

int s=4,p=5,d=9,e=10;

bool found=false;
ob.RetrieveItem(s,found);
if(found)
{
    cout<<"found"<<endl;

}
else{
   cout<<"  Not found"<<endl;

}
found=false;
ob.RetrieveItem(p,found);
if(found)
{
    cout<<"found"<<endl;

}
else{
   cout<<"  Not found"<<endl;

}
 found=false;
ob.RetrieveItem(d,found);
if(found)
{
    cout<<"found"<<endl;

}
else{
   cout<<"  Not found"<<endl;

}
found=false;
ob.RetrieveItem(e,found);
if(found)
{
    cout<<"found"<<endl;

}
else{
   cout<<"  Not found"<<endl;

}

if(ob.IsFull())
{
    cout<<"list is full"<<endl;
}
else{

    cout<<"list is not full"<<endl;

}
ob.ResetList();
ob.DeleteItem(5);

if(ob.IsFull())
{
    cout<<"list is full"<<endl;
}
else{

    cout<<"list is not full"<<endl;

}
ob.DeleteItem(1);

ob.print();
ob.DeleteItem(6);

ob.print();
    cout << "Hello world!" << endl;
    return 0;
}
