/*
    Write a program to implement Student class

    rollno, name, score as data members
    Suitable constructors - default, parameterized, copy constructors
    A function to display the student details
*/
#include<iostream>
using namespace std;
class Student
{
    int rollno;
    string name;
    double score;
    public:
    Student()
    {
        rollno = 1;
        name = "XYZ";
        score = 90;
    }

    Student(int r, string n, double s)
    {
        rollno = r;
        name = n;
        score = s;
    }

    void disp()
    {
        cout<<"-------- Student info --------"<<endl;
        cout<<"Roll no is "<<rollno<<endl;
        cout<<"Name is "<<name<<endl;
        cout<<"Score is "<<score<<"%"<<endl;
    }
};
int main()
{
    Student s1;
    s1.disp();
    
    Student s2(2,"ABC",80);
    s2.disp();
    return 0;
}