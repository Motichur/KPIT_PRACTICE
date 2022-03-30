#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H
class Employee
{
    int Empid;
    char EmpName[20];
    double BasicSal;
    public:
    Employee();
    Employee(int,const char*,double);
    int getEmpId();
    char * getEmpName();
    double getBasicSal();
    void accept();
    void display();

};
#endif