#include "List2.h"
#include "List2.cpp"
using namespace std;

int main()
{
    cout << "Rubayate" << endl;

    UnsortedList<string> ls;
    cout << "Enter N" << endl;
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
       ls.insertItem(s);
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
