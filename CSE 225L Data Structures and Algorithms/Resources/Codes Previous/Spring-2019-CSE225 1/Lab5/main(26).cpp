#include "sortedtype.h"
#include "sortedtype.cpp"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    SortedType<int>st;

    int len = st.LengthIs();
    cout << len << endl;

    cout << endl;

    st.InsertItem(5);
    st.InsertItem(7);
    st.InsertItem(4);
    st.InsertItem(2);
    st.InsertItem(1);

    int x;
    len = st.LengthIs();
    for(int i=0; i<len; i++){
        st.GetNextItem(x);
        cout << x << " " ;
    }cout << endl;
    st.ResetList();

    cout << endl;

    bool flag = false; x = 6;
    st.RetrieveItem(x, flag);
    if(flag == true){
        cout << "Item is found" << endl;
    }else{
        cout << "Item is not found" << endl;
    }

    cout << endl;

    flag = false; x = 5;
    st.RetrieveItem(x, flag);
    if(flag == true){
        cout << "Item is found" << endl;
    }else{
        cout << "Item is not found" << endl;
    }

    cout << endl;

    flag = st.IsFull();
    if(flag == true){
        cout << "List is full" << endl;
    }else{
        cout << "List is not full" << endl;
    }

    cout << endl;

    x=1;
    st.DeleteItem(x);


    len = st.LengthIs();
    for(int i=0; i<len; i++){
        st.GetNextItem(x);
        cout << x << " " ;
    }cout << endl;
    st.ResetList();

    cout << endl;

    flag = st.IsFull();
    if(flag == true){
        cout << "List is full" << endl;
    }else{
        cout << "List is not full" << endl;
    }

    cout << endl;



    return 0;
}

