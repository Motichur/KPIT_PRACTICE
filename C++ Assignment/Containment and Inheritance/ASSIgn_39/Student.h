#include"Date.h"

class Student
{
    int rollno;
    char name[20];
    Date dob;
    public :
    Student();
    Student(const char *, int, int, int);
    void accept();
    void display();
};