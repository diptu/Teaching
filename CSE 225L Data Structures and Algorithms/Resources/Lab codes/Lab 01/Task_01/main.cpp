#include <iostream>

using namespace std;

int main()
{
    int s;
    int *ptr = NULL;
    cin>>s;

    ptr = new int[s];

    for(int i = 0; i<s; i++)
        cin>>ptr[i];

    for(int i = 0; i<s; i++)
        cout<<ptr[i]<<" ";

    delete [] ptr;
    ptr = NULL;

    return 0;
}
