#include<iostream>
#include"SalesPerson.h"
using namespace std;
	
SalesPerson :: SalesPerson()
{
	sales = 10;
	commission = 20;
}

SalesPerson :: SalesPerson(int i,const char *n,int d, int m, int y,
		int h, int r, int s, int c):WageEmployee(i,n,d,m,y,h,r)
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

