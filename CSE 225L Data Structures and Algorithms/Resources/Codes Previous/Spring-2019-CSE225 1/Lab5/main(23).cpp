#include "sortedtype.h"
#include "sortedtype.cpp"
#include<iostream>
using namespace std;

int main ()
{
    int b;
    int c=0;
    int d= 6;
    int e = 5;
    int f = 1;

 SortedType<int>a;
 cout<<"list of integers = "<<a.LengthIs()<<endl;
 cout<<"insert integers = ";

  for(int i=0; i<5; i++)
  {
      cin>>b;
      a.InsertItem(b);
  }
  a.ResetList();
  cout <<"list print = ";
  for(int i=0;i<5;i++)
  {
      a.GetNextItem(c);
      cout<<" "<<c;
  }

  bool found = false;
  a.RetrieveItem(d,found);
  if(found)
  {
      cout <<"item is found"<<endl;
  }
  else
  {
      cout<<"item not found"<<endl;

  }
  found = false;
  a.RetrieveItem(e,found);
  if(found)
  {
      cout <<"item is found"<<endl;
  }
  else
  {
      cout<<"item not found"<<endl;

  }

  if(a.IsFull())
  {
      cout << "list is full"<<endl;
  }
  a.DeleteItem(f);
  a.ResetList();

  for(int i = 0;i<4;i++)
  {
      a.GetNextItem(c);
      cout<<" " <<c;
  }
  if(a.IsFull())
  {
      cout << "list is full"<<endl;
  }
  else
  {
      cout<< "list is not full" <<endl;
  }

}
