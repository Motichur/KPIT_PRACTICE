#include"Employee.h"
class WageEmployee : public Employee
{
	int hours;
	int rate;
public:
	WageEmployee();
	WageEmployee(int,const char*,int,int,int,int,int);
	void display();
	int calcSalary();
};