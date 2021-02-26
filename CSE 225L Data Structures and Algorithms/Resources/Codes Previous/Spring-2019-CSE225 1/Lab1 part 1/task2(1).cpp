//TASK1
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;

    int *p;
    p=new int*[n];

    int i;
    for(i=0; i<n; i++)
    {
        cout<<"Element "<<i+1<<": ";
        cin>>p[i];
        cout<<endl;
    }

    for(i=0; i<n; i++)
        cout<<p[i]<<" ";

    delete []p;
    return 0;
}

//TASK2
#include<iostream>
using namespace std;

int main()
{
    int i, j, row, col;

    cout<<"Number of rows: "<<endl;
    cin>>row;
    cout<<"Number of columns: "<<endl;
    cin>>col;

    string **p;
    p=new string*[row]; //dynamically create array of pointers of size row;
    for(i=0; i<row; i++)
    {
        p[i]=new string[col]; //dynamically allocate memory of size col for each row;
    }

    cout<<"Enter elements: "<<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            cin>>p[i][j];
    }

    //printing
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            cout<<p[i][j]<<" ";
        cout<<endl;
    }

    for(i=0; i<row; i++) //dynamically allocated memory release
    {
        delete [] p[i]; //array of characters
    }
    delete [] p; //array of pointers

    return 0;
}

//TASK3
#include<iostream>
using namespace std;

int main()
{
    int i, j, row, col;

    cout<<"Number of rows: "<<endl;
    cin>>row;

    int **p=new int*[row];

    for(i=0; i<row; i++)
    {
        cout<<"Number of columns for row "<<i+1<<": "<<endl;
        cin>>col;
        p[i]=new int[col];

        cout<<"Enter elements: "<<endl;
        for(j=0; j<col; j++)
            cin>>p[i][j];
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<sizeof (p[i]); j++)
            cout<<p[i][j]<<" ";
        cout<<endl;
    }

    for(i=0; i<row; i++)
    {
        delete [] p[i];
    }
    delete [] p;

    return 0;
}
