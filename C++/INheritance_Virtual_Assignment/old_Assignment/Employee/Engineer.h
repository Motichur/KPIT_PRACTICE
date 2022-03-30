#include"Employee.h"

class Engineer:public Employee
{
    int id;
    char name[20];
    double sal;
    public:
    Engineer(int=1,const char * = "ABC",double=20000);
    void salary();
    void display();
};