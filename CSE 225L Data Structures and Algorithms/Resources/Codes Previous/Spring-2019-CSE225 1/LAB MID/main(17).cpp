#include "stacktype.h"
#include "stacktype.cpp"
#include <iostream>

using namespace std;

int main()
{
    StackType<int> s,s1,s2;
    int num;
    int maximum=0;
    cout << "enter number : ";
    for(int i = 0 ; i<5 ; i++)
    {
        cin >> num;
        if(maximum < num)
        {
            maximum = num;
            s1.Push(maximum);
        }
        s.Push(num);
    }


    cout << "Maximum element is : " << s1.getMax();










    cout << endl;
    cout << "Hello world!" << endl;
    return 0;
}
