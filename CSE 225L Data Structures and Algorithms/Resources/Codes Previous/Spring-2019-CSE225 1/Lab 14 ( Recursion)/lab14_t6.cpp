#include<iostream>
#include<cmath>
using namespace std;

int power(int a, int x){
    if(x == 0){
        return 1;
    }
    else if(x == 1){
        return a;
    }
    else{
        return a * power(a, x - 1);
    }
}
double sumOfSeries(int n){
    if(n == 0){
        return 1;
    }
    else{
        return ((1 / pow(2, n)) + sumOfSeries(n - 1));
    }
}

int main()
{
    int num1;
    cout << "Enter n: ";
    cin >> num1;

    cout << "Sum of series is: " << sumOfSeries(num1) << endl;
    return 0;
}



