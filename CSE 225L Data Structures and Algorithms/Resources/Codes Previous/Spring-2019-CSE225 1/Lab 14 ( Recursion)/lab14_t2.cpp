#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}

int main()
{
    int num1;
    cout << "Enter N: ";
    cin >> num1;

    cout << num1 << " factorial is: " << factorial(num1) << endl;

    return 0;
}

