#include <iostream>

using namespace std;

int DecToBin(int dec)
{
    if(dec==1)
        return 1;
    else
        return (dec%2)+10 * DecToBin(dec/2);
}

int main()
{
    int n;
    cin>>n;
    cout<<DecToBin(n);


    return 0;
}


