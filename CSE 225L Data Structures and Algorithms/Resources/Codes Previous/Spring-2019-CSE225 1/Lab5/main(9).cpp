#include <iostream>
#include "sorted.h"
#include "sortedtype.cpp"

using namespace std;

int main()
{
    int n;
    SortedType <int> st;

    cout<<st.LengthIs()<<endl;

    for(int i=0; i<5; i++)
    {
        cin>>n;
        st.InsertItem(n);
    }

    cout<<st<<endl;

    return 0;
}
