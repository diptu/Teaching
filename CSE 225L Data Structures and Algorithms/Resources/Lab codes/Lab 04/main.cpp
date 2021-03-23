#include <iostream>
#include "unsortedtype.cpp"
#include "studentInfo.h"
using namespace std;

int main()
{
    /*
    UnsortedType<int> l;
    int num;
    cout<<"Insert four items  : ";
    for(int i = 0; i < 4; i++){
        cin>>num;
        l.InsertItem(num);
    }
    cout<<"Items are : ";
    for(int i = 0; i < l.LengthIs(); i++){
       l.GetNextItem(num);
       cout<<num<<" ";
    }
    cout<<endl;
    l.ResetList();
    cout<<"Length of the list is : "<<l.LengthIs()<<endl;

    cout<<"Insert one item : ";
    cin>>num;
    l.InsertItem(num);

    cout<<"Items are : ";
    for(int i = 0; i < l.LengthIs(); i++){
       l.GetNextItem(num);
       cout<<num<<" ";
    }
    cout<<endl;
    l.ResetList();
    num = 4;
    bool isFound = false;
    l.RetrieveItem(num,isFound);
    if(isFound) cout<<"Item is found"<<endl;
    else cout<<"Item is not found"<<endl;

    num = 5;
    l.RetrieveItem(num,isFound);
    if(isFound) cout<<"Item is found"<<endl;
    else cout<<"Item is not found"<<endl;

    num = 9;
    l.RetrieveItem(num,isFound);
    if(isFound) cout<<"Item is found"<<endl;
    else cout<<"Item is not found"<<endl;

    num = 10;
    l.RetrieveItem(num,isFound);
    if(isFound) cout<<"Item is found"<<endl;
    else cout<<"Item is not found"<<endl;

    if(l.IsFull()) cout<<"List is Full"<<endl;
    else cout<<"List is not Full"<<endl;

    l.DeleteItem(5);

    if(l.IsFull()) cout<<"List is Full"<<endl;
    else cout<<"List is not Full"<<endl;

    l.DeleteItem(1);

    for(int i = 0; i < l.LengthIs(); i++){
       l.GetNextItem(num);
       cout<<num<<" ";
    }
    cout<<endl;
    l.ResetList();
    l.DeleteItem(6);
    for(int i = 0; i < l.LengthIs(); i++){
       l.GetNextItem(num);
       cout<<num<<" ";
    }
    cout<<endl;
    l.ResetList();
    l.MakeEmpty();
*/

    StudentInfo s;
    UnsortedType<StudentInfo> sl;

    int id;
    string name;
    float cgpa;
    cout<<"Insert four items  : ";
    for(int i = 0; i < 5; i++){
        cout<< "ID : ";
        cin>>id;
        s.setID(id);

        cout<< "Name : ";
        cin>>name;
        s.setName(name);
        cout<< "CGPA : ";
        cin>> cgpa;
        s.setCGPA(cgpa);

        sl.InsertItem(s);
        cout<<endl;
    }

    cout<<"Students Info : "<<endl;
    for(int i = 0; i < sl.LengthIs(); i++){
        sl.GetNextItem(s);
        s.Print();
    }
    sl.ResetList();

    for(int i = 0; i < sl.LengthIs(); i++){
        sl.GetNextItem(s);
        if(s.getID()==15467)
            sl.DeleteItem(s);

    }
    sl.ResetList();

    cout<<"Students Info : "<<endl;
    for(int i = 0; i < sl.LengthIs(); i++){
        sl.GetNextItem(s);
        s.Print();
    }
    cout<<endl;
    sl.ResetList();

    StudentInfo temp;
    temp.setID(13569);
    bool isFound = false;

    sl.RetrieveItem(temp, isFound);
    if(isFound){
            cout<<"Item is found\n";
            temp.Print();
    }else
        cout<<"Item not found\n";
    cout<<endl;
    for(int i = 0; i < sl.LengthIs(); i++){
        sl.GetNextItem(s);
        s.Print();
    }

    sl.ResetList();

    return 0;
}
