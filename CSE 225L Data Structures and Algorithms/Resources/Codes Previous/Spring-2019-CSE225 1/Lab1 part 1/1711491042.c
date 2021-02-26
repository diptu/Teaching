    int arraySize1;
    int *integer;
    cout << "Enter array size : ";
    cin >> arraySize1;
    integer = new int[arraySize1];

    for(int i = 0 ; i< arraySize1 ; i++)
    {
       cin >> integer[i];
    }
     for(int i = 0 ; i< arraySize1 ; i++)
    {
       cout << integer[i] << " ";
    }

    delete [] integer;


    cout << endl;

    int rows,colums;

    char **CharArray;

    cout << "Enter number of rows and colums : ";

    cin >> rows;

    cin >> colums;

    CharArray = new char*[rows];

    for(int i = 0 ; i<rows ; i++)
    {
       CharArray[i] = new char[colums];
    }

    for(int i = 0 ; i<rows ; i++)
    {
       for(int j = 0 ; j<colums ; j++)
       {
          cin >> CharArray[i][j];
       }
    }
     for(int i = 0 ; i<rows ; i++)
    {
       for(int j = 0 ; j<colums ; j++)
       {
          cout << CharArray[i][j];
       }
    }

    for(int i = 0 ; i,rows ; i++)
    {
       delete [] CharArray[i];
    }

    delete [] CharArray;

    cout << endl;
