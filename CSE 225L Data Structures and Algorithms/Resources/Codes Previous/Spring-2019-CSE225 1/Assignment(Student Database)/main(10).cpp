#include <iostream>
#include "student.h"
using namespace std;

int main()
{
    cout<<"How many of info you want to input? ";
    int n;
    cin >> n;
    cout<<endl;

    StudentDB db(n);

    return 0;
}
