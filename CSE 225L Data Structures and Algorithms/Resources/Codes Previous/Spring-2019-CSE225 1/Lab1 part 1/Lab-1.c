//Task-1
int main()
{
    int vrbl;

    cout<<"Enter the size of array: "<<endln;
    cin>>vrbl;

    int *p;
    p=new int[vrbl];

    for(int i=0; i<vrbl; i++)
    {
        cout<<"Element "<<i+1<<": "<<endln;
        cin>>p[i];
    }
    for(int i=0; i<vrbl; i++)
    {
        cout<<p[i]<<" ";
    }

    delete [] p;

    return 0;
}

//Task-2
int row, col;

cout<<"Number of rows: "<<endln;
cin>>row;
cout<<"Number of columns: "<<endln;
cin>>col;

string **p;
p=new string*[row];
for(int i=0; i<row; i++)
{
    p[i]=new string[col];
}
cout<<"Enter elements: "<<endln;
for(int i=0; i<row; i++)
{
    for(int j=0; j<col; j++)
        cin>>p[i][j];
}
for(i=0; i<row; i++)
{
    for(j=0; j<col; j++)
    {
        for(j=0; j<col; j++)
            cout<<p[i][j]<<" "<<endln;
    }
    for(i=0; i<row; i++)
    {
        delete [] p[i];
    }
    delete [] p;


}
