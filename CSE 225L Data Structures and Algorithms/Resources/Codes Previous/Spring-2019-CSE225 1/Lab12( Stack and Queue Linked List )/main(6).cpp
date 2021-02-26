#include <iostream>
using namespace std;
#include "list.cpp"
#include "list2.cpp"
#include "stack.cpp"
#include "queue.cpp"
#include <string>

template<class T>
bool isPalindrome(StackLL<T> s, QueueLL<T> q){
    T stVal, qVal;
    bool valMatched = true;

    for(int i = 0; (!s.isEmpty() && !q.isEmpty()); i++){
        stVal = s.pop();
        qVal = q.dequeue();

        if(stVal != qVal){
            valMatched = false;
            break;
        }
    }
    return valMatched;
}

int main() {
    cout << "Stack and Queue using Linked list lab-12" << endl;

    // 1st part - task 1
    StackLL<char> sl;
    QueueLL<char> ql;

    string str;
    cout << "\nEnter a string: ";
    getline(cin, str);

   for(int i = 0; (str[i] != NULL); i++){
        char temp;
        temp = str[i];

        sl.push(temp);
        ql.enqueue(temp);
    }

    // is palindrome part
    if(isPalindrome(sl, ql)){
        cout << str << " is palindrome" << endl;
    }
    else{
        cout << str << " is not palindrome" << endl;
    }


    // 2nd part - task 2
    StackLL<char> sl2;
    QueueLL<char> ql2;

    string str2, str3;

    cout << "\nEnter 1st string: ";
    getline(cin, str2);
    for(int i = 0; (str2[i] != NULL); i++){
        char temp = str2[i];
        sl2.push(temp);
    }

    cout << "\nEnter 2nd string: ";
    getline(cin, str3);
    for(int i = 0; (str3[i] != NULL); i++){
        char temp = str3[i];
        ql2.enqueue(temp);
    }

    // is reverse part
    if(isPalindrome(sl2, ql2)){
        cout << str2 << " is reverse of " << str3 << endl;
    }
    else{
        cout << str2 << " is not reverse of " << str3 << endl;
    }





    return 0;
}
