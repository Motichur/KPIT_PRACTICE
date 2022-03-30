#include"Employee.h"

class Manager:public Employee
{
    int basic_sal;
    int sub_ordinates;
    public:
    Manager();
    Manager(int, const char*, int, int, int, int, int);
    void display();
    void basicSalary();
};