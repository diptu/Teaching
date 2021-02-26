#include <iostream>
#include "list.h"
#include "list.cpp"
#include <string>


using namespace std;

int main()
{
    SinglyLinkedListWithTail<char> *slt = new SinglyLinkedListWithTail<char>;
    char c;
    int n;
    string s;


    cout << "Enter where to insert : ";
    cin >>  s;

    if(s=="start")
    {
         for(int i = 0 ; i<5 ; i++)
         {
             cout << "input some characters : ";
             cin >> c;
             slt->insertAtStart(c);
         }
    }
     if(s=="end")
    {
         for(int i = 0 ; i<5 ; i++)
         {
             cout << "input some characters : ";
             cin >> c;
             slt->insertAtEnd(c);
         }
    }

    cout << "Enter number of position to delete : ";
    cin >> n;

    slt->deleteAtPosition(n);

    slt->display();







    cout << "Hello world!" << endl;
    return 0;
}
