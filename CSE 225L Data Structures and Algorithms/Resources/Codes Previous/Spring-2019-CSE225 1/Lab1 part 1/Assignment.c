No.1

#include<iostream>

using namespace std;

int main()
{
int x;
int *p;
p = new int[x];

cout<<"Enter the size : "<<endl;
cin>>x;

for(int i = 0; i<x ; i++)
{
    cout<<""<<i+1;
    cin>>p[x];
    cout<<endl;
}

for(int i = 0; i<n ; i++)
{
    cout<<p[i]<<" ";
}
delete []p;
return 0;
}


No.2

#include<iostream>

using namespace std;
int main()
{
int r,c;

cout<<"Enter the number of rows : "<<endl;
cin>>r;
cout<<"Enter the number of columns : "<<endl;
cin>>c;

string **p;
p = new string * [r];

for(int i = o; i<r ;i++)
{
    p[i]= new string [c];
}

for(int i = 0; i <r; i++)
{
    for(int j = 0; j <col ; j++)
        cin>>p[i][j];
}

for(int i = 0; i<row; i++)
{
    for(int j = 0; j<c ; j++)
        cin>>p[i][j]<<" ";
    cout<<end;'
}
for(int i = 0; i<r ; i++)
{
    delete [] p[i];
}
    delete [] p;
    return 0;
}
No.3

#include <iostream>

using namespace std;

int main()
{
int r,c,i,j;
int arr[10][10];


cout<<"Enter the number of rows : "<<endl;
cin>>r;
cout<<"Enter the number of columns : "<<endl;
cin>>c;

for(i=0; i<r;i++)
{
    for(j=0;j<c;j++)
    {
        cout<<"Enter values for ["<<i<<"]["<<j<<"] : ";
        cin>>arr[i][j];
    }
}

return 0;


