#include<iostream>
#include<cstring>
#include"Student.h"
using namespace std;

Student:: Student()
{
    rollno = 1;
    strcpy(name,"ABC");
}

Student :: Student(const char *n,int d, int m, int y):dob(d,m,y)
{
    rollno = 1;
    strcpy(name,n);
}

void Student :: accept()
{
    cout<<"ENter student Name and Date of Birth"<<endl;
    cin>>name;
    dob.accept();
}

void Student::display()
{
    cout<<rollno<<"\t"<<name<<"\t";
    dob.display();
    rollno++;
}