#ifndef STUDENTINFO_H
#define STUDENTINFO_H

const int MAX_ITEMS2=5;
class studentInfo
{
    public:
        studentInfo();
        ~studentInfo();

    protected:

    private:
        int ID[MAX_ITEMS2];
        char Name[MAX_ITEMS2];
        float CGPA[MAX_ITEMS2];
};

#endif // STUDENTINFO_H
