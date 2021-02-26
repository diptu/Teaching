#include "stacktype.cpp"


int main()
{
    StackType<int>obj;

    obj.Push(1); obj.Push(3); obj.Push(5); obj.Push(67);
    obj.Pop();
    cout<<obj.getMax()<<endl;

    //cout<<obj.Top();


    return 0;
}
