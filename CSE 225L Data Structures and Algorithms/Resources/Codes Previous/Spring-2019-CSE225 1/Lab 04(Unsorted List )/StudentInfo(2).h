
#ifndef LAB4_STUDENTINFO_H
#define LAB4_STUDENTINFO_H

#include <string>
class StudentInfo {
private:
    int id;
    string name;
    float cgpa;
public:
    StudentInfo();
    StudentInfo(int,string, float);
    void RetrieveStudent(int);
    void deleteStudent(int);
    void print();



};


#endif //LAB4_STUDENTINFO_H
