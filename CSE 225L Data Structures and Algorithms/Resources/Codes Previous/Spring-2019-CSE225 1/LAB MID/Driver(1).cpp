#include<iostream>
#include"Stack.cpp"
#include"Queue.cpp"



using namespace std;
int main()
{

    StackType<int> ob;
    StackType<int> ob1;
    if(ob.IsEmpty())
    {
        cout<<"empty"<<endl;
    }
   ob.Push(5);
   ob.Push(7);
   ob.Push(4);
   ob.Push(9);




   cout<<endl;
   while(!ob.IsEmpty())
{
    ob1.Push(ob.Top());
    ob.Pop();
}

for(int i=0;i<4;i++)
{
cout<<ob1.Top()<<endl;
    ob.Push(ob1.Top());

    ob1.Pop();
}
cout<<"Max Value:"<<ob.getMax()<<endl;
cout<<endl;
cout<<"Push 3";
ob.Push(3);

cout<<endl;
for(int i=0;i<5;i++)
{

    ob1.Push(ob.Top());
    ob.Pop();

}

for(int i=0;i<5;i++)
{
cout<<ob1.Top()<<endl;
    ob.Push(ob1.Top());

    ob1.Pop();

}
cout<<"Max Value:"<<ob.getMax()<<endl;

cout<<endl;

ob.Pop();

cout<<endl;
cout<<"Max Value:"<<ob.getMax()<<endl;

cout<<endl;

ob.Pop();

cout<<endl;
cout<<"Max Value:"<<ob.getMax()<<endl;


    return 0;
}
