#include <iostream>
#include "sortedtype.cpp"
using namespace std;

int main()
{int a;
int b;

 sortedtype<int> ob;
 cout<<ob.lenghts()<<endl;

 cout<<" ";
 for(int i=0;i<5;i++)
 {
     cin>>a;
     ob.insertitem(a);


 }
for(int i=0;i<5;i++)
{
    ob.getnextitem(b);
    cout<<b;


}
int c;
cin>>c;
bool found=false;
ob.retriveitem(c,found);
if(found)
{
    cout<<"found"<<endl;

}

else
{

    cout<<"not found"<<endl;
}
cin>>c;
 found=false;
ob.retriveitem(c,found);
if(found)
{
    cout<<"found"<<endl;

}

else
{

    cout<<"not found"<<endl;
}
    cout << "Hello world!" << endl;
    return 0;
}
