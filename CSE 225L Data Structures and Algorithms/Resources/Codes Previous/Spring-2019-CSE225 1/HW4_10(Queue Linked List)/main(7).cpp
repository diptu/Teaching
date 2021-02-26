#include <iostream>

using namespace std;

int min (int coinList[] , int n , int value ) {
    int coins [value+1] ;
    if (value == 0) return 0;

    coins [0] = 0 ;
    for(int i = 1 ; i <= value ; i++ ) {
        coins[i] = INT_MAX ;     // filling up with arbitrary big number
    }
     int tempCoins ;
    for (int i = 1 ; i <= value ; i++) {  // value =11
        for (int j = 0 ;j<n ; j++){    // n==4
            if (coinList[j]<=i)
                tempCoins = coins [i-coinList[j]];
            if (tempCoins != INT_MAX && tempCoins+1< coins[i])
                coins [i] = tempCoins +1 ;
        }
    }
        return coins [value] ;
}


int main()
{   int sizee ;  cin>>sizee ;
    int coinList [sizee] ;
    for (int i = 0 ; i< sizee ; i++) {
        cin>> coinList[i] ;
    }
    int value ;
    cin>> value;
    cout << min(coinList,sizee,value)<< endl;
    return 0;
}
