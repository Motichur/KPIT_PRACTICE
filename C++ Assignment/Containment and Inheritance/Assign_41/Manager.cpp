#include "Manager.h"
#include<iostream>
using namespace std;

Manager::Manager()
{
    Petrol_Allow = 0.007 * Employee::getBasicSal();
    Food__Allow = 0.011 * Employee::getBasicSal();
    Other_Allow = 0.004 * Employee::getBasicSal();
}

Manager::Manager(int i, const char* n,double b):Employee(i,n,b)
{
    Petrol_Allow = 0.007 * Employee::getBasicSal();
    Food__Allow = 0.011 * Employee::getBasicSal();
    Other_Allow = 0.004 * Employee::getBasicSal();   
}

void Manager::accept()
{
    cout<<"Enter Manager id,Name,Basic Salary"<<endl;;
    Employee::accept();
}

void Manager::calcGrossSalary()
{
    gross_Salary = Employee::getBasicSal() + Petrol_Allow + Food__Allow + Other_Allow;
}

void Manager ::calcnetSalary()
{
    double PF = 0.12*Employee::getBasicSal();
    net_Salary = gross_Salary-PF;
}

void Manager::display()
{
    Employee::display();
    cout<<gross_Salary<<"\t"<<net_Salary<<endl;
}