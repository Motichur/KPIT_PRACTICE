#include<iostream>
#include<cstring>
#include"Employee.h"
using namespace std;

Employee:: Employee(int i, const char *n , double e, double s)
{
    empId = i;
    strcpy(name , n);
    experience = e;
    salary = s;
}

void Employee::accept()
{
    cout<<"Enter Employee id , name, experince And salary"<<endl;
    cin>>empId>>name>>experience>>salary;
}

void Employee::display()
{
    cout<<"------Employee Info------"<<endl;
    cout<<"Id "<<empId<<endl;
    cout<<"Naem "<<name<<endl;
    cout<<"Experience "<<experience<<endl;
    cout<<"Salary "<<salary<<endl;
}