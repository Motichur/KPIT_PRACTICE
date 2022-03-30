#include<iostream>
#include<cstring>
#include"WageEmployee.h"
using namespace std;

WageEmployee :: WageEmployee()
{
	id = 1;
	strcpy(name,"ABC");
	hours = 9;
	rate = 300;
}

WageEmployee :: WageEmployee(int i,const char *n,int h, int r,
				int d, int m, int y):dob(d,m,y)
{
	id = i;
	strcpy(name,n);
	hours = h;
	rate = r;
} 

void WageEmployee ::display()
{
	cout<<id<<"\t"<<name<<"\t";
	dob.display();
	cout<<"\t"<<hours<<"\t"<<rate;
}

int WageEmployee :: calcSalary()
{
	int salary;
	salary = hours*rate;
	return salary;
}