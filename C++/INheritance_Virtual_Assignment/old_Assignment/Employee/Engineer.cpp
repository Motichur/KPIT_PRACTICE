#include<iostream>
#include<cstring>
#include"Engineer.h"
using namespace std;

Engineer::Engineer(int i,const char *n,double s)
{
    id =i;
    strcpy(name,n);
    sal = s;
}

void Engineer::salary()
{
    cout<<"Salary of Engineer is "<<sal<<endl;
}

void Engineer::display()
{
    cout<<"Id "<<id<<endl;
    cout<<"Name "<<name<<endl;
    salary();
}