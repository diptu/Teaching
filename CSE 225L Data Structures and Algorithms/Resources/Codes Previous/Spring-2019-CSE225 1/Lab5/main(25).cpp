#include "sortedtype.h"
#include "sortedtype.cpp"
#include <iostream>


using namespace std;

int main()
{
      SortedType<int>ob;
      int b;
      for(int i=0;i<=5;i++)
        cin>>b;
      ob.InsertItem(b);

      ob.print();

}
