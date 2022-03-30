#include "WageEmployee.h"
class SalesPerson : public WageEmployee
{
	int sales;
	int commission;
	public:
	SalesPerson();
	SalesPerson(int, const char *, int, int, int, int, int, int, int);
	void display();
	int calcSalary();
};