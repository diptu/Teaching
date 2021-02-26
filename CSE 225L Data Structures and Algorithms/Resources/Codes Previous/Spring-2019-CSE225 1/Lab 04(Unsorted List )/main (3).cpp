#include <iostream>
#include "unsortedtype.cpp"
using namespace std;

int main()
{
    unsortedtype<int> ob;


int a=4;
    for(int i=0;i<a;i++){

            int b;
            cin>>b;
    ob.InsertItem(b);
    }

ob.print();
ob.InsertItem(1);
ob.print();

int s;
cin>>s;
bool found=false;
ob.RetrieveItem(s,found);
if(found!=true)
{
    cout<<"found"<<endl;

}
else{
   cout<<"  Not found"<<endl;

}
    cout << "Hello world!" << endl;
    return 0;
}
