#include "quetype.cpp"
#include <iostream>
using namespace std;

int minCoins(int coins[], int n, int amount)
{
    if(amount==0)
        return 0;

    int result=INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(coins[i]<=amount)
        {
            int sub_res=minCoins(coins, n, amount-coins[i]);

            if (sub_res!=INT_MAX && sub_res+1<result)
                result=sub_res+1;
        }
    }

    return result;
}

int main()
{
    int n, i;
    cout<<"Enter the number of coin types: "<<endl;
    cin>>n;

    int coins[n];
    int temp;
    cout<<endl<<"Enter the coin values: "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>coins[i];
    }

    int amount;
    cout<<endl<<"Enter the amount of money: "<<endl;
    cin>>amount;

    int requirement=minCoins(coins, n, amount);
    cout<<endl<<"Minimum coins required is "<<requirement<<endl;
}


