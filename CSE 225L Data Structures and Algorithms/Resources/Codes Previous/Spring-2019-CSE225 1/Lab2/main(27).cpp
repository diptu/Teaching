#include "dynarr.h"
#include <iostream>

using namespace std;

int main()
{
 int a;
 int b;
 cin>>b;

    dynarr<int> ob();
    dynarr<int> ob1(b);
     ob1.allocate( b);
    for(int i=0;i<b;i++)
    {
        cin>>a;
        //ob.setValue(i,a);
      ob1.setValue(i,a);
    }


     for(int i=0;i<b;i++)
    {

       // cout<<ob1.getValue(i);
    cout<<ob1.getValue(i)<<endl;
    }



   // cout << "Hello world!" << endl;
    return 0;
}
