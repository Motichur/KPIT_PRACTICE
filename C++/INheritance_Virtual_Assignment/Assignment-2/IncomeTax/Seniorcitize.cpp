#include<iostream>
#include"Seniorcitize.h"
using namespace std;

Seniorcitize::Seniorcitize(double i)
{
    income = i;
}

void Seniorcitize::calcTax()
{
    double tax;
    if(income<=500000)
    {
        cout<<"You Don't Need to pay Tax"<<endl;
    }
    else if(income>500000 && income<1000000)
    {
        tax = 0.20*income;
        cout<<"You have to pay Rs."<<tax<<" Tax"<<endl;
    }
    else
    {
        tax = 0.30*income;
        cout<<"You have to pay Rs."<<tax<<" Tax"<<endl;
    }
}

void Seniorcitize::display()
{
    calcTax();
}