#include"Employee.h"
#include"Date.h"
class WageEmployee : public Employee
{
	int id;
	char name[20];
	int hours;
	int rate;
	Date dob;
public:
	WageEmployee();
	WageEmployee(int,const char*,int,int,int,int,int);
	void display();
	int calcSalary();
};