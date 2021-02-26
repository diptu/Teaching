#include <iostream>
using namespace std;


int findMin(int A[], int size)
{

    if (size == 1)
        return A[0];
    return min(A[size-1], findMin(A, size-1));
}


int main()
{
    int A[] = {5,65,-89,-52,65,2};
    int size = sizeof(A)/sizeof(A[0]);
    cout <<  findMin(A, size);
    return 0;
}
