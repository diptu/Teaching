#include<iostream>
using namespace std;
int main()
{


    char rows,columns;
cout<<"enter";
    cin>>rows;
    cin>>columns;

    char **CharArray;
    CharArray= new char*[rows];
    for(int i=0; i<rows; i++)
    {



        CharArray[i]=new char[columns];

    }


    for(int i=0; i<rows; i++)
    {

        {
            for(int j=0; j<columns; j++)
            {



                cin>>CharArray[i][j];

            }
        }
for(int i=0; i<rows; i++)
    {

        {
            for(int j=0; j<columns; j++)
            {



                cout<<CharArray[i][j]<<endl;

            }
        }



    }

 for(int i=0; i<rows; i++)
    {


delete [] CharArray[i];

    }

    }
}


