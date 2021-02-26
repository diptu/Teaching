#include "timestamp.h"
#include <iostream>

using namespace std;

int main()
{
    TimeStamp T;
    int j,n1,n2,n3;
    T.InsertTime(15,34,23);
    T.InsertTime(13,13,02);
    T.InsertTime(43,45,12);
    T.InsertTime(25,36,17);
    T.InsertTime(52,02,20);

    cout<<"The list is "<<endl;
    for(j=0;j<T.LengthIs();j++)
    {
        T.GetNextItem(n1,n2,n3);
        cout<<n1<<":"<<n2<<":"<<n3<<endl;
    }

    T.DeleteTime(25,36,17);

    T.ResetList();
    cout<<"The list is "<<endl;
    for(j=0;j<T.LengthIs();j++)
    {
        T.GetNextItem(n1,n2,n3);
        cout<<n1<<":"<<n2<<":"<<n3<<endl;
    }

    return 0;
}
