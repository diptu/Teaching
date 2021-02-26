#include<iostream>

#include "unsortedtype.cpp"
using namespace std;

int main()
{
    int n,i;
    UnsortedType <int> U;
    U.InsertItem(5);
    U.InsertItem(7);
    U.InsertItem(6);
    U.InsertItem(9);

    for(i=0;i<4;i++)
    {
      U.GetNextItem(n);
      cout<<n<<endl;
    }

    cout<<"The length of the array is:"<<U.LengthIs();
    U.InsertItem(1);




return 0;
}








