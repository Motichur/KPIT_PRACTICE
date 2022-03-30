#include<iostream>
#include"Manager.h"
using namespace std;

Manager::Manager()
{
    basic_sal = 20000;
    sub_ordinates = 15;
}

Manager::Manager(int i, const char *n, int d, int m, int y, int b, int sa):Employee(i,n,d,m,y)
{
    basic_sal = b;
    sub_ordinates =sa;
}

void Manager::basicSalary()
{
    cout<<basic_sal;
}

void Manager::display()
{
    Employee::display();
    basicSalary();
    cout<<"\t"<<sub_ordinates<<endl;
}