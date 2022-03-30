#include<iostream>
#include"RegularCitizen.h"
using namespace std;

RegularCitizen::RegularCitizen(double i)
{
    income = i;
}

void RegularCitizen::calcTax()
{
    double tax;
    if(income<250000)
    {
        cout<<"You Don't Need to pay Tax"<<endl;
    }
    else if(income>=250000 && income<500000)
    {
        tax = 0.10*income;
        cout<<"You have to pay Rs."<<tax<<" Tax"<<endl;
    }
    else if(income>=500000 && income<1000000)
    {
        tax = 0.15*income;
        cout<<"You have to pay Rs."<<tax<<" Tax"<<endl;
    }
    else
    {
        tax = 0.20*income;
        cout<<"You have to pay Rs."<<tax<<" Tax"<<endl;
    }
}

void RegularCitizen::display()
{
    calcTax();
}