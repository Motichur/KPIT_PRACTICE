#include<iostream>
using namespace std;

class Employee
{
    public:
    virtual void payroll()=0;
};

class Trainee:public Employee
{
    double salary;
    public:
    Trainee();
    void payroll();
};

Trainee::Trainee()
{
    salary=500000;
}

void Trainee::payroll()
{
    cout<<"payroll "<<salary<<endl;
}

int main()
{
    Trainee t;
    t.payroll();
    return 0;
}