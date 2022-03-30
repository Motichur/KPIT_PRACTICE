#include"Employee.h"

class Manager : public Employee
{
    double Petrol_Allow;
    double Food__Allow;
    double Other_Allow;
    double gross_Salary;
    double net_Salary;
    public:
    Manager();
    Manager(int, const char*, double);
    void accept();
    void calcGrossSalary();
    void calcnetSalary();
    void display();
};