#include"Employee.h"
#include<iostream>
#include<cstring>
using namespace std;

Employee :: Employee()
{
    Empid = 1;
    strcpy(EmpName,"ABC");
    BasicSal = 150000;
}

Employee :: Employee(int i, const char *n, double d)
{
    Empid = i;
    strcpy(EmpName,n);
    BasicSal = 198000;
}

int Employee ::getEmpId()
{
    return Empid;
}

char * Employee::getEmpName()
{
    return EmpName;
}

double Employee::getBasicSal()
{
    return BasicSal;
}

void Employee ::accept()
{
    cin>>Empid>>EmpName>>BasicSal;
}

void Employee :: display()
{
    cout<<Empid<<"\t"<<EmpName<<"\t"<<BasicSal<<"\t";
}