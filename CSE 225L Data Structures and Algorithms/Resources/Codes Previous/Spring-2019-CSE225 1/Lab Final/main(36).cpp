#include<bits/stdc++.h>
#include "list.h"
#include "list2.h"
#include "list.cpp"
#include "list2.cpp"

using namespace std;

int main()
{
    SortedList<int>ls;

    int n, k, x, y;
    int cnt = 0;

    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> x;
        ls.insertItem(x);
    }

    ls.reset();
    while(ls.hasNext()){
        x = ls.nextItem();
        if(x < n)
        {
            if(ls.hasNext())
                y = ls.nextItem();
            x = x + (2*y);
            ls.insertItem(x);
            ls.reset();
            cnt++;
        }
    }

    if(cnt == 0)
        cout << "-1" << endl;
    else
        cout << cnt << endl;

    return 0;
}
