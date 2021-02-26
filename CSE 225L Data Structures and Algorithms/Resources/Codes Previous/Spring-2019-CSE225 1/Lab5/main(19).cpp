#include <iostream>
#include"sortedtype.cpp"
using namespace std;

int main()
{
    SortedType <int> s;
    int length= s.LengthIs();
    cout<<length<<endl;

     s.InsertItem(5);
     s.InsertItem(7);
     s.InsertItem(4);
     s.InsertItem(2);
     s.InsertItem(1);
length= s.LengthIs();

    for(int i=0;i<length;i++)
    {
        int print;
        s.GetNextItem(print);
 cout <<print << endl;
    }
    s.RetrieveItem()
    s.ResetList();
    return 0;
}
