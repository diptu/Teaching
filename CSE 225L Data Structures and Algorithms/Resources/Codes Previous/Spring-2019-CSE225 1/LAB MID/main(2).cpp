#include "stacktype.h"
#include "stacktype.cpp"

using namespace std;

int main()
{
    int e;
    StackType<int>st;

    for(int i=0;i<MAX_ITEMS;i++){
        cin>>e;
        st.Push(e);
    }
    st.Pop();
    st.getMax();

    cout << endl;
}

