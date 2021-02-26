#include "TASK 1,2,4.h"
#include "TASK 1,2,4.cpp"
#include <iostream>

using namespace std;

int main()
{
    dynArr<int> ob1;
    dynArr<char> ob2(5);

    for(int i=0;i<5;i++)
    {

        char tmp;
        cout << "Dynamic Array element" << "[" << i << "] :";
        cin>> tmp;
        ob2.setValue(i,tmp);
    }

    for(int i=0;i<5;i++)
    {
        cout << "Element " << i+1 <<" : " << ob2.getValue(i)<<endl;
    }


    return 0;
}
