#include<iostream>
#include"Currency.h"
using namespace std;

Currency::Currency(double r)
{
    rupess = r;
}

Currency Currency::operator+(Currency &c)
{
    Currency temp;
    temp.rupess = rupess + c.rupess;
    return temp;
}

Currency Currency::operator-(Currency &c)
{
    Currency temp;
    temp.rupess = rupess - c.rupess;
    return temp;
}

Currency Currency::operator++()
{
    Currency temp;
    temp.rupess = ++rupess;
    return temp;
}

void Currency::accept()
{
    cout<<"Enter rupees"<<endl;
    cin>>rupess;
}

void Currency::display()
{
    cout<<rupess<<endl;
}