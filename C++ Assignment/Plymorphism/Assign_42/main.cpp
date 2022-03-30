#include<iostream>
#include"SalesPerson.h"
using namespace std;
int main()
{
	
/*	
	Employee e1;
	e1.display();
	Employee e2(2,"XYZ",20,05,2000);
	e2.display();

	WageEmployee w1,w2(2,"XYZ",20,05,2000,400,9);
	w1.display();
	w1.calcSalary();
	cout<<endl;
	w2.display();
	w2.calcSalary();
*/
	SalesPerson s1;
	s1.display();
	SalesPerson s2(2,"XYZ",400,9,15,30,20,05,2000);
	s2.display();
return 0;
}