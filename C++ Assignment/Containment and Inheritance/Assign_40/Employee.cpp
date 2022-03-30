#include<iostream>
#include<cstring>
#include"Employee.h"
using namespace std;

Employee :: Employee()
{
	id = 1;
	strcpy(name,"ABC");
}

Employee :: Employee(int i, const char *n, int d, int m, int y):dob(d,m,y)
{
	id = i;
	strcpy(name,n);
}
void Employee:: display()
{
	cout<<id<<"\t"<<name<<"\t";
	dob.display();
}