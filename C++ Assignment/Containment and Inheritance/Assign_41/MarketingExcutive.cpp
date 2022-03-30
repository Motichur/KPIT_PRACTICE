#include<iostream>
#include"MarketingExcutive.h"
using namespace std;

MarketingExcutive::MarketingExcutive()
{
    killometerTravel=20;
    tour_Allow = killometerTravel*5;
}

MarketingExcutive ::MarketingExcutive(int i, const char *n, double b,int k):Employee(i,n,b)
{
    killometerTravel = k;
    tour_Allow = k*5;
}

void MarketingExcutive::accept()
{
    cout<<"Enter Manager Excutive id,name,basic sal and killometers travelled"<<endl;
    Employee::accept();
    cin>>killometerTravel;
}

void MarketingExcutive::calcGrossSalary()
{
    gross_Salary = Employee::getBasicSal() + tour_Allow + telephone_Allow;
}

void MarketingExcutive::calcnetSalary()
{
    double PF = 0.12*Employee::getBasicSal();
    net_Salary = gross_Salary-PF;
}

void MarketingExcutive::display()
{
    Employee::display();
    cout<<gross_Salary<<"\t"<<net_Salary<<endl;
}