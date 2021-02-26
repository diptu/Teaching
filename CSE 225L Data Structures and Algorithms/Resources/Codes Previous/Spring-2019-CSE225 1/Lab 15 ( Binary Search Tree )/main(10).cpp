#include <iostream>
#include "binarysearchtree.cpp"
#include "quetype.cpp"
using namespace std;

int main()
{
    int num;
    TreeType<int> tt(5);

    if(tt.IsEmpty()){
        cout<<"Tree is empty"<<endl;
    }else{
        cout<<"Tree is not empty"<<endl;
    }

    for(int i=0; i<4; i++)
    {
        cin>>num;
        tt.InsertItem(num);
    }
    return 0;
}
