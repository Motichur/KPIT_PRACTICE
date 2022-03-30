#include"Employee.h"
#include<iostream>
#include<cstring>
using namespace std;

Employee::Employee()
{
    id = 1;
    strcpy(emp_name,"ABC");
    salary = 40000;
}

Employee:: Employee(int i, const char *n, double s)
{
    id = i;
    strcpy(emp_name,n);
    salary = s;
}

void Employee ::setID(int i)
{
    id =i;
}

void Employee ::setName(const char *n)
{
    strcpy(emp_name,n);
}

void Employee :: setSalary(double s)
{
    salary = s;
}

void Employee :: accept()
{
    cout<<"Enrter Employee id, Name and Salary"<<endl;
    cin>>id>>emp_name>>salary;
}

void Employee::display()
{
    cout<<id<<"\t"<<emp_name<<"\t"<<salary<<endl;
}