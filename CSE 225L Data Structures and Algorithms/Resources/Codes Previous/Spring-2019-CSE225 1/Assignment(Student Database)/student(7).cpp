#include "student.h"

// constructors
Student::Student() {
    name = "";
    id = 0;
    cgpa = 0;
    dept = "";
}
Student::Student(string n, int i, float c, string d) {
    name = n;
    id = i;
    cgpa = c;
    dept = d;
}

// accessors
string Student::getName() {
    return name;
}
int Student::getId() {
    return id;
}
float Student::getCgpa() {
    return cgpa;
}
string Student::getDept() {
    return dept;
}

// modifiers
void Student::setName(string n) {
    this->name = n;
}
void Student::setId(int i) {
    this->id = i;
}
void Student::setCgpa(float c) {
    this->cgpa = c;
}
void Student::setDept(string d) {
    this->dept = d;
}

// other methods
void Student::print() {
    cout << "Name: " << getName() << ", ID: " << getId() << ", Dept: " << getDept() << ", CGPA: " << getCgpa() << endl;
}
