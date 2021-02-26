#include <iostream>
using namespace std;
#include "list.cpp"

int main() {
    cout << "Singly Linked list_lab-10" << endl;

    SinglyLinkedList<int> *sll = new SinglyLinkedList<int>;

    int posNum, intNum;
    cout << "\nInsert int numbers in postion: " << endl;
    while(true) {
        cout << "Position: ";
        cin >> posNum;
        if(posNum == 0) {
            sll->display();
            break;
        } else {
            cout << "int number: ";
            cin >> intNum;

            sll->insertAtPosition(intNum, posNum);
            sll->display();
        }
    }

    cout << "\nPrinting the list without using display()" << endl;
    cout << "\nUsing reset(), hasNext(), nextItem()" << endl;
    sll->reset();
    while(sll->hasNext()) {
        int x = sll->nextItem();
        cout << x << "\t";
    }

    sll->reset();
    cout << "\nUsing getVaule() function" << endl;
    try {
        for(int i = 1; sll->hasNext(); i++) {
            cout << sll->getValue(i) << "\t";
        }
    } catch(PositionOutOfBound p) {
        cout << "Exception" << endl;
    }

    int userInput;
    cout << "\nEnter a integer to search: ";
    cin >> userInput;

    int srcPos = sll->searchItem(userInput);
    if(srcPos == 0) {
        cout << "\nNumber is not found in the linked list" << endl;
    } else {
        cout << "\nNumber is found at " << srcPos << " in the linked list" << endl;
        cout << "\nDelete the number " << userInput << endl;
        sll->deleteAtPosition(srcPos);

        cout << "\nPrint the list after deleting " << userInput << endl;
        sll->display();

        cout << "\Replace the number " << userInput << endl;
        int x1;
        cout << "\nEnter a new integer to replace:" ;
        cin >> x1;
        sll->insertAtPosition(x1, srcPos);

        cout << "\nPrint the list after replacing " << userInput << endl;
        sll->display();
    }

    return 0;
}
