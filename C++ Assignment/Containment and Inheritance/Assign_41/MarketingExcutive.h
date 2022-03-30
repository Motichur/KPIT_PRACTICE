#include"Employee.h"
class MarketingExcutive: public Employee
{
    int killometerTravel;
    int tour_Allow;
    double telephone_Allow=2000;
    double gross_Salary;
    double net_Salary;
    public:
    MarketingExcutive();
    MarketingExcutive(int,const char *,double,int);
    void accept();
    void calcGrossSalary();
    void calcnetSalary();
    void display();
};