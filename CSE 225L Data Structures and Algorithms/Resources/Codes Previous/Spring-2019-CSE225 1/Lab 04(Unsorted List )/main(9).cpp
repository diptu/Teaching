#include "studentInfo.h"
#include "unsortedtype.h"
#include "unsortedtype.cpp"
#include <bits/stdc++.h>

using namespace std;

int main()
{
    UnsortedType<int>ut;

    ut.InsertItem(5);
    ut.InsertItem(7);
    ut.InsertItem(6);
    ut.InsertItem(9);

    int x;
    int len = ut.LengthIs();
    for(int i=0; i<len; i++){
        ut.GetNextItem(x);
        cout << x << " ";
    } cout << endl;
    ut.ResetList();

    cout << endl;

    cout << "Length : " << len << endl;

    ut.InsertItem(1);

    len = ut.LengthIs();
    for(int i=0; i<len; i++){
        ut.GetNextItem(x);
        cout << x << " ";
    } cout << endl;
    ut.ResetList();

    cout << endl;

    bool flag;  x = 4;
    ut.RetrieveItem(x, flag);
    if(flag){
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }

    x = 5;
    ut.RetrieveItem(x, flag);
    if(flag){
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }

    x = 9;
    ut.RetrieveItem(x, flag);
    if(flag){
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }

    x = 10;
    ut.RetrieveItem(x, flag);
    if(flag){
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }

    cout << endl;

    flag = ut.IsFull();
    if(flag){
        cout << "List is full" << endl;
    } else {
        cout << "List is not full" << endl;
    }

    ut.DeleteItem(5);

    flag = ut.IsFull();
    if(flag){
        cout << "List is full" << endl;
    } else {
        cout << "List is not full" << endl;
    }

    cout << endl;

    ut.DeleteItem(1);

    len = ut.LengthIs();
    for(int i=0; i<len; i++){
        ut.GetNextItem(x);
        cout << x << " ";
    } cout << endl;
    ut.ResetList();

    ut.DeleteItem(6);

    len = ut.LengthIs();
    for(int i=0; i<len; i++){
        ut.GetNextItem(x);
        cout << x << " ";
    } cout << endl;
    ut.ResetList();

    UnsortedType<Student>st;

    Student s1(15234, "Jon", 2.6);
    st.InsertItem(s1);
    Student s2(13732, "Tyrion", 3.9);
    st.InsertItem(s2);
    Student s3(13569, "Sandor", 1.2);
    st.InsertItem(s3);
    Student s4(15467, "Ramsey", 3.1);
    st.InsertItem(s4);
    Student s5(16285, "Arya", 3.1);
    st.InsertItem(s5);

    Student sd(15467);
    st.DeleteItem(sd);

    cout << endl;

    Student sr(13569);
    st.RetrieveItem(sr, flag);
    if(flag){
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }
    sr.print();

    cout << endl;

    Student s;
    len = st.LengthIs();
    for(int i=0; i<len; i++){
        st.GetNextItem(s);
        s.print();
    }st.ResetList();

    cout << endl;

    return 0;
}
