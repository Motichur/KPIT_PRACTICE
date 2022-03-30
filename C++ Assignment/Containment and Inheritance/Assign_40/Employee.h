#include"Date.h"

class Employee
{
	int id;
	char name[20];
	Date dob;
public:
	Employee();
	Employee(int, const char*, int, int, int);
	void display();
};