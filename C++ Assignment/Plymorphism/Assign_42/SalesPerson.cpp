#include<iostream>
#include"SalesPerson.h"
using namespace std;
	
SalesPerson :: SalesPerson()
{
	sales = 10;
	commission = 20;
}

SalesPerson :: SalesPerson(int i,const char *n,int h, int r, int d, int m, int y,
		int s, int c):WageEmployee(i,n,h,r,d,m,y)
{
	sales = s;
	commission = c;
}

void SalesPerson ::display()
{
	WageEmployee::display();
	cout<<"\t"<<sales<<"\t"<<commission<<endl;
}

int SalesPerson :: calcSalary()
{
	int salary = WageEmployee::calcSalary() + sales*commission;
	return salary;
}

