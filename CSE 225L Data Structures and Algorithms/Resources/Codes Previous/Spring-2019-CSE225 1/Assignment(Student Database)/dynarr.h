class dynArr
{

private:
    int **data;
    int row,col;

public:
    dynArr();
    dynArr(int, int);
    ~dynArr();
    void setValue(int,int, int);
    int getValue(int, int);

    void allocate(int, int);



};
