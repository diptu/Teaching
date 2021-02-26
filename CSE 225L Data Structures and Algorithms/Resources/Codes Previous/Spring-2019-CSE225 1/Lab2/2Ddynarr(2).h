class dynArr
{
private:
    int **data;
    int row, col;
public:
    dynArr();
    dynArr(int, int);
    ~dynArr();
    void setValue(int, int, int);
    int getValue(int, int);
    //Task2
    void allocate(int, int);
};
