#include "studentdb.h"

StudentDB::StudentDB() {
    numSt = 0;
}
StudentDB::StudentDB(int n) {
    string name, dept;
    int id;
    float cgpa;
    numSt = 0;

    cout << "Input information of " << n << " students" << endl;
    for(int i = 0; i < n; i++) {
        cout << "\nStudent " << (i+1) << " information:" << endl;
        cout << "Enter Name: ";
        cin >> name;
        st[i].setName(name);

        cout << "Enter ID: ";
        cin >> id;
        st[i].setId(id);

        cout << "Enter CGPA: ";
        cin >> cgpa;
        st[i].setCgpa(cgpa);

        cout << "Enter Dept: ";
        cin >> dept;
        st[i].setDept(dept);

        numSt++;
    }
}
void StudentDB::print() {
    cout << "\nInformation of StudentDB" << endl;
    for(int i = 0; i < numSt; i++) {
        st[i].print();
    }
}
void StudentDB::add(Student s) {
    numSt++;
    st[numSt] = s;
}
int StudentDB::searchStudent(int id) {
    for(int i = 0; i < numSt; i++) {
        if(st[i].getId() == id) {
            return i;
        } else {
            return -1;
        }
    }
}
int StudentDB::searchStudent(string name) {
    for(int i = 0; i < numSt; i++) {
        if(st[i].getName() == name) {
            return i;
        } else {
            return -1;
        }
    }
}
Student StudentDB::getStudent(int idx) {
    for(int i = 0; i < numSt; i++) {
        if(i == idx) {
            return st[i];
        }
    }
}
void StudentDB::deleteStudent(int id) {
    for(int i = 0; i < numSt; i++) {
        if(st[i].getId() == id) {
            Student temp;
            temp = st[i];
            st[i] = st[numSt];
            st[numSt] = temp;
            numSt--;
            cout << "\nSuccessfully deleted ID " << id << " information" << endl;
        } else {
            cout << "\nID is not found to be deleted" << endl;
        }
    }
}
