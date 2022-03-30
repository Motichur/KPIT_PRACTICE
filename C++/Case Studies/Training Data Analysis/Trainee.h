#include"Employee.h"

class Trainee:public Employee
{
    char track_name[20];
    double scores;
    public:
    Trainee();
    Trainee(const char *, double ,int, const char * , double);
    void payroll();
    void appraisal();
    void display();
};