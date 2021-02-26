#include<iostream>
using namespace std;

int findMin(int a[], int size){
    if(size == 1){
        return a[0];
    }
    else{
        return (a[size - 1] < findMin(a, size - 1)) ? a[size - 1] : findMin(a, size - 1);
    }
}

int main()
{
    int arrLen;
    cout << "Enter array size: ";
    cin >> arrLen;

    int arr[arrLen];
    cout << "Enter " << arrLen << " elements: ";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    int minNum = findMin(arr, 5);
    cout << "Mininum number is: " << minNum << endl;

    return 0;
}




