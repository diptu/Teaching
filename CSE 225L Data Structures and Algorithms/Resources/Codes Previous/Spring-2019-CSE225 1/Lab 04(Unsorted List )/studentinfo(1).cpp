#include "studentinfo.h"

StudentInfo::StudentInfo() {
    id = 0;
    name = "";
    cgpa = 0;
}
StudentInfo::StudentInfo(int i, string n, float c) {
    id = i;
    name = n;
    cgpa = c;
}
void StudentInfo::setId(int i) {
    id = i;
}
void StudentInfo::setName(string n) {
    name = n;
}
void StudentInfo::setCgpa(float c) {
    cgpa = c;
}
int StudentInfo::getId() {
    return id;
}
string StudentInfo::getName() {
    return name;
}
float StudentInfo::getCgpa() {
    return cgpa;
}
void StudentInfo::print() {
    cout << "ID: " << getId() << ", Name: " << getName() << ", CGPA: " << getCgpa() << endl;
}
bool operator!=(StudentInfo &s1, StudentInfo &s2){
    if(s1.getId() != s2.getId()){
        return true;
    }
    else{
        return false;
    }
}
bool operator==(StudentInfo &s1, StudentInfo &s2){
    if(s1.getId() == s2.getId()){
        return true;
    }
    else{
        return false;
    }
}
