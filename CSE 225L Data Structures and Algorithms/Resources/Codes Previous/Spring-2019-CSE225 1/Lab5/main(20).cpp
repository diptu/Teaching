#include "sortedtype.h"
#include "sortedtype.cpp"
#include <iostream>


using namespace std;

int main()
{
      SortedType<int>ob;
      int len=ob.LengthIs();
      cout <<len<<endl;

      ob.InsertItem(5);
      ob.InsertItem(7);
      ob.InsertItem(4);
      ob.InsertItem(2);
      ob.InsertItem(1);

      len=ob.LengthIs();
      int num;
      for(int i=0;i<len;i++)
      {
          ob.GetNextItem(num);
            cout<<num << " ";
      }
      cout<<endl;
      ob.ResetList();




}
