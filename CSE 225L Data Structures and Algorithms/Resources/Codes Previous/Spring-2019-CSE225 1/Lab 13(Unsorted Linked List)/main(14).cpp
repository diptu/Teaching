#include<bits/stdc++.h>
#include "list.h"
#include "list2.h"
#include "list.cpp"
#include "list2.cpp"

using namespace std;

int main()
{
    UnsortedList<string>ls;

    cout << endl;

    int n;
    cout << "Enter N : ";
    cin >> n;
    getchar();
    string s;
    while(n--){
        getline(cin, s);
        ls.insertItem(s);
    }

    cout << endl;

    cout << "Enter string for delete :  ";
    getline(cin, s);
    ls.deleteItem(s);

    cout << endl;

    SortedList<string>lt;
    cout << endl;
    ls.reset();
    while(ls.hasNext()){
        s = ls.nextItem();
        lt.insertItem(s);
    }

    lt.reset();
    while(lt.hasNext()){
        s = lt.nextItem();
        cout << s << endl;
    }

    cout << endl;
    return 0;
}
