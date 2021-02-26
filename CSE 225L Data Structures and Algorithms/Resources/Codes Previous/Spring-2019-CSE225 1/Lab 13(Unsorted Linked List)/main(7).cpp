#include <iostream>
#include"List2.cpp"
#include"list.cpp"
#include<string>


using namespace std;

int main()
{
    UnsortedList<string> ls;

    int n;
    cout<<"Enter List size: "<<endl;
    cin>>n;
    string st;
    for(int i=0;i<n;i++)
    {
        cin>>st;
        ls.insertItem(st);
    }

    string s2;
    cin >> s2;


    ls.deleteItem(s2);

    UnsortedList<string> lt;
    ls.reset();

    while(ls.hasNext()) {
        string s3 =  ls.nextItem();
        lt.insertItem(s3);
    }

     lt.reset();
    while(lt.hasNext())
        cout << lt.nextItem() << endl;

    return 0;
}
