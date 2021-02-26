#include "quetype.cpp"
#include "stacktype.cpp"

int main()
{
    QueType<char>obj;
    obj.Enqueue('a');obj.Enqueue('c');
    obj.Enqueue('d');obj.Enqueue('b');obj.Enqueue('e');

    obj.Reverse(2);


    for(;!obj.IsEmpty();)
    {
        char c;
        obj.Dequeue(c);
        cout<<c<<" ";
    }


    return 0;
}
