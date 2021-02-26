#include<iostream>
using namespace std;

int sumOfDigits(int x){
    if(x == 0){
        return 0;
    }
    else{
        return ((x % 10) + sumOfDigits(x / 10));
    }
}

int main()
{
    int num1;
    cout << "Enter N: ";
    cin >> num1;

    cout << "Sum of digits of " << num1 << " is: " << sumOfDigits(num1) << endl;

    return 0;
}


