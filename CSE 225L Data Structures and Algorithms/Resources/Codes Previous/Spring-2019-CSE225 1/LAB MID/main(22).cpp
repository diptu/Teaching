#include "stacktype.h"
#include "stacktype.cpp"
#include <bits/stdc++.h>

using namespace std;

StackType<int>st;
int getMax();

int main()
{
    int kase = 5;
    int x;
    cout << "Input: ";
    while(kase--){
        cin >> x;
        st.Push(x);
    }


    x = getMax();
    cout << "Output : " << x << endl;

    st.Pop();

    x = getMax();
    cout << "Output : " << x << endl;
    return 0;
}

int getMax()
{
    int y;
    StackType<int>s;
    StackType<int>temp;
    for(int i=0; !st.IsEmpty(); i++){
        y = st.Top();
        s.Push(y);
        temp.Push(y);
        st.Pop();
    }

    for(int i=0; !temp.IsEmpty(); i++){
        y = temp.Top();
        st.Push(y);
        temp.Pop();
    }

    int x, maxValue = 0;
    while(!s.IsEmpty()){
        x = s.Top();
        s.Pop();
        if(x>maxValue){
            maxValue = x;
        }
    }
    return maxValue;
}

