#ifndef STUDENTDB_H_INCLUDED
#define STUDENTDB_H_INCLUDED
#include "student.h"

class StudentDB {
  private:
    Student st[100];
    int numSt;

  public:
    // default constructor
    StudentDB();
    // constructor that fills up first n element of st array
    // by reading info of n students from user
    StudentDB(int n);

    // print info of all students in st array
    void print();

    // add a student in st array
    void add(Student s);

    // search a student in st array and returns its index
    // returns -1 if not found
    int searchStudent(int id);
    int searchStudent(string name);

    // returns the student object at index i of st array
    Student getStudent(int idx);

    // delete the student information whose student_id is id
    void deleteStudent(int id);

};

#endif // STUDENTDB_H_INCLUDED
