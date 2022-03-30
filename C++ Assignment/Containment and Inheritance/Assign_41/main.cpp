#include<iostream>
#include"Manager.h"
#include"MarketingExcutive.h"
using namespace std;
int main()
{
    Manager m1;
    m1.accept();
    m1.calcGrossSalary();
    m1.calcnetSalary();
    m1.display();
    cout<<"----MAnager Info----"<<endl;
    cout<<endl;
    
    MarketingExcutive ma1(1,"ABC",198000,21);
    ma1.accept();
    ma1.calcGrossSalary();
    ma1.calcnetSalary();
    cout<<"----Marketing Excutive info----"<<endl;
    ma1.display();
    return 0;
}