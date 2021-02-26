#include "stacktype.h"
#include "stacktype.cpp"
#include "quetype.h"
#include "quetype.cpp"
#include <bits/stdc++.h>

using namespace std;

StackType<int>st;
QueType<char>q;
int getMax();
void Reverse(int k);

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

    char c;
    kase = 5;
    cout << "Input: ";
    while(kase--){
        cin >> c;
        q.Enqueue(c);
    }

    Reverse(3);

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

void Reverse(int k){
    StackType<char>stc;
    char c;
    while(k--){
        q.Dequeue(c);
        stc.Push(c);
    }
    while(!stc.IsEmpty()){
        c = stc.Top();
        cout << c << " ";
        stc.Pop();
    }
    while(!q.IsEmpty()){
        q.Dequeue(c);
        cout << c << " ";
    }
    cout << endl;
}
