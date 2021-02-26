#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
    int i;
   dynArr d1();
   dynArr d2(5);
  for(i=0;i<5;i++)
        d2. setValue(i,3*i+1);
    for(i=0;i<5;i++)
        cout << d2.getValue(i) << endl;
    return 0;

}
