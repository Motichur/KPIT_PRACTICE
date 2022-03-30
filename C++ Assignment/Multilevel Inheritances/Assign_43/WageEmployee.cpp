#include<iostream>
#include"WageEmployee.h"
using namespace std;

WageEmployee :: WageEmployee()
{
	hours = 9;
	rate = 300;
}

WageEmployee :: WageEmployee(int i,const char *n,int d, int m, int y,
		int h, int r):Employee(i,n,d,m,y)
{
	hours = h;
	rate = r;
} 

void WageEmployee ::display()
{
	Employee::display();
	cout<<"\t"<<hours<<"\t"<<rate;
}

int WageEmployee :: calcSalary()
{
	int salary;
	salary = hours*rate;
	return salary;
}