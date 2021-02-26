#include "unsortedtype.cpp"
#include "studentInfo.h"
#include <iostream>
using namespace std;

int main()
{
    Unsortedtype<int> obj;
    int temp=0;
    obj.InsertItem(5); obj.InsertItem(7); obj.InsertItem(6); obj.InsertItem(9);

    for(int i=0;i<obj.LengthIs();i++)
    {

        obj.GetNextItem(temp);
        cout << temp << "  ";
    }

    cout<<endl<<obj.LengthIs()<<endl;

    obj.InsertItem(1);
    obj.ResetList();
    for(int i=0;i<obj.LengthIs();i++)
    {

        obj.GetNextItem(temp);
        cout << temp << "  ";
    }

    bool val=false; temp=4;
    obj.RetrieveItem(temp,val);
    if(val)
        cout<<"\nItem found\n";
    else cout<<"\nItem is not found\n";

    val=false;temp=5;
    obj.RetrieveItem(temp,val);
    if(val)
        cout<<"\nItem found\n";
    else cout<<"\nItem is not found\n";

    val=false;temp=9;
    obj.RetrieveItem(temp,val);
    if(val)
        cout<<"\nItem found\n";
    else cout<<"\nItem is not found\n";

    val=false;temp=10;
    obj.RetrieveItem(temp,val);
    if(val)
        cout<<"\nItem found\n";
    else cout<<"\nItem is not found\n";

    if(obj.IsFull()) cout<<"\nList is full\n";
    else cout << "\nList not full\n";

    obj.DeleteItem(5);

    if(obj.IsFull()) cout<<"\nList is full\n";
    else cout << "\nList not full\n";


    obj.DeleteItem(1);
    obj.ResetList();
    for(int i=0;i<obj.LengthIs();i++)
    {

        obj.GetNextItem(temp);
        cout << temp << "  ";
    }
    cout<<endl;


    obj.DeleteItem(6);
    obj.ResetList();
    for(int i=0;i<obj.LengthIs();i++)
    {

        obj.GetNextItem(temp);
        cout << temp << "  ";
    }

    /*STUDENT*/
    cout<<"\n\n";

    Unsortedtype<studentInfo> obj2;
    studentInfo s1("Jon",15234,2.6); studentInfo s2("Tyrion",13732,3.9);
    studentInfo s3("Sandor",13569,1.2); studentInfo s4("Ramsey",15467,1.2); studentInfo s5("Arya",16285,3.1);


    obj2.InsertItem(s1); obj2.InsertItem(s2); obj2.InsertItem(s3); obj2.InsertItem(s4); obj2.InsertItem(s5);

    obj2.DeleteItem(s4);



    val=false;
    obj2.RetrieveItem(s3,val);
    if(val)
    {
        cout << "Item is found"<<endl;
        s3.PrintStudentInfo();
        cout<<endl;
    }

    studentInfo temp_student("",0,0);
    obj2.ResetList();
    for(int i=0;i<obj2.LengthIs();i++)
    {

        obj2.GetNextItem(temp_student);
        temp_student.PrintStudentInfo();
    }

    return 0;
}
