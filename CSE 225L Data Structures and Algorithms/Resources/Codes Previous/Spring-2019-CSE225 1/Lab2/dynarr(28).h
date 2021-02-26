template<class x>
class dynArr
{
private:
    x *data;
    int size;
public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void setValue(int, x);
    x getValue(int);
    //Task2
    void allocate(int);
};
