#include <iostream>
#include "studentinfo.h"

using namespace std;

int main()
{
    StudentInfo S;
    int i;
    string n2;
    float n3;
    long findId,n1;
    bool exist;
    S.InsertItem(15234,"Jon",2.6);
    S.InsertItem(13732,"Tyrion",3.9);
    S.InsertItem(13569,"Sandor",1.2);
    S.InsertItem(15467,"Ramsey",3.1);
    S.InsertItem(16285,"Arya",3.1);

    cout<<"The students list is"<<endl;
    for(i=0;i<S.LengthIs();i++)
    {
        S.GetNextItem(n1,n2,n3);
        cout<<n1<<"    "<<n2<<"      "<<n3<<endl;
    }

    S.DeleteItem(15467);

    findId=13569;
    S.RetrieveItem(findId,exist);
    if(exist==true)
    {
      cout<<"Item is found"<<endl;
      cout<<S.GetID(findId)<<"      "<<S.GetName(findId)<<"     "<<S.GetCGPA(findId)<<endl;
    }
    else
        cout<<"Item is not found"<<endl;

    S.ResetList();
    cout<<"The students list is"<<endl;
    for(i=0;i<S.LengthIs();i++)
    {
        S.GetNextItem(n1,n2,n3);
        cout<<n1<<"    "<<n2<<"    "<<n3<<endl;
    }

    return 0;
}
