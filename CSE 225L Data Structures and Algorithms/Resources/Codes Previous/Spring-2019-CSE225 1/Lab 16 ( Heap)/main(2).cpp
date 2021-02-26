#include <iostream>

#include "pqtype.cpp"

using namespace std;

int main()
{
    int num;

    PQType<int> pqt(15);

    if(pqt.IsEmpty()){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }

    for(int i=0; i<10; i++)
    {
        cin>>num;
        pqt.Enqueue(num);
    }

    if(pqt.IsEmpty()){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }

    int n;
    pqt.Dequeue(n);

    cout<<n<<endl;

    pqt.Dequeue(n);

    cout<<n<<endl;



    return 0;
}
