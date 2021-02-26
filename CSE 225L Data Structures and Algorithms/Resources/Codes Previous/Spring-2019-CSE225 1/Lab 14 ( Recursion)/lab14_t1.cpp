#include<iostream>
using namespace std;

int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }
    else{
        return (fib(n - 2) + fib(n - 1));
    }
}
int main()
{
    int num1;
    cout << "Enter Nth fib number: ";
    cin >> num1;

    cout << num1 << " th fib number is: " << fib(num1) << endl;

    for(int i = 0; i < num1; i++){
        cout << fib(i) << endl;
    }

    return 0;
}
