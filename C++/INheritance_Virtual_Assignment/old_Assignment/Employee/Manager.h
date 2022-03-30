#include"Employee.h"

class Manager:public Employee
{
    int id;
    char name[20];
    double sal;
    public:
    Manager(int=1,const char * = "ABC",double=20000);
    void salary();
    void display();
};