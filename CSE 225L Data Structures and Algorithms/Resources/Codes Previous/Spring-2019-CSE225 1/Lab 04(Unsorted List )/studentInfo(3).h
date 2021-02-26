#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

#include <string>
#include <string.h>

using namespace std;

class studentInfo
{
    friend studentInfo operator+(studentInfo &a,double&b);
    //friend studentInfo operator-(studentInfo&a,double&b);
    friend bool operator!=(studentInfo &a,studentInfo &b);
    friend bool operator==(studentInfo &a,studentInfo &b);
    //friend void operator=(studentInfo &a,studentInfo &b);

    public:
        studentInfo();
        studentInfo(string,int,double);
        void PrintStudentInfo();
        int getID();
        string getName();
        double getCGPA();
        void setID(int);
        void setName(string);
        void setCGPA(double);


    private:
        string name;
        int ID;
        double CGPA;

};
#endif // STUDENTINFO_H_INCLUDED
