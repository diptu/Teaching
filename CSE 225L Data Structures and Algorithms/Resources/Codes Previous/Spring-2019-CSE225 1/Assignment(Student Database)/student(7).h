class StudentDB
{
Student st[100];//array of Student objects
//number of actual Student objects in st array
int numSt;
public:
StudentDB(){numSt=0;} //default constructor
//constructor that fills up first n elements of st array
//by reading info of n students from user
StudentDB(int n);
//prints the info of all students in st array
void print();
//add a student in st array
void add(Student s);
//search a student in st array and returns its index;
//returns -1, if not found
int searchStudent(int id);
int searchStudent(string name);
//returns the student object at index i of st array
Student getStudent(int i);
//delete the student whose student_id is id
void deleteStudent(int id);
};
#endif // STUDENT
