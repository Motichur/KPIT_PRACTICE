#include<iostream>
#include<cstring>
#include"Manager.h"
using namespace std;

Manager::Manager(int i,const char *n,double s)
{
    id =i;
    strcpy(name,n);
    sal = s;
}

void Manager::salary()
{
    cout<<"Salary of Manager is "<<sal<<endl;
}

void Manager::display()
{
    cout<<"Id "<<id<<endl;
    cout<<"Name "<<name<<endl;
    salary();
}