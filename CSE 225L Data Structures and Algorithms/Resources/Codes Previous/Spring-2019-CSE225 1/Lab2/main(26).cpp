#include "dynarr.cpp"
#include <iostream>

using namespace std;

int main()
{
 int a;
 int b;
 cout<<"Enter size"<<endl;
 cin>>b;

    dynarr<int> ob();
    dynarr<int> ob1(b);
     ob1.allocate( b);
      cout<<"Enter input"<<endl;
    for(int i=0;i<b;i++)
    {
        cin>>a;
        //ob.setValue(i,a);
      ob1.setValue(i,a);
    }

 cout<<"Values:"<<endl;
     for(int i=0;i<b;i++)
    {

       // cout<<ob1.getValue(i);
    cout<<ob1.getValue(i)<<endl;
    }



   // cout << "Hello world!" << endl;
    return 0;
}
