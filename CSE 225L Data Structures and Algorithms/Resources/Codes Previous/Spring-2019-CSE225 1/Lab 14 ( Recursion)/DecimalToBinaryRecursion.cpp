#include <iostream>
using namespace std;

int DecToBin(int dec)
{
    if (dec == 0)
        return 0;
    else
        return (dec % 2 + 10 *
                DecToBin(dec / 2));
}

int main()
{
    int x;
    cin>>x;
    cout<<DecToBin(x);
}
