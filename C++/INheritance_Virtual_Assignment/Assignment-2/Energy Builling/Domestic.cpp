#include<iostream>
#include"Domestic.h"
using namespace std;

Domestic::Domestic(int u,double r)
{
    energyUnits = u;
    rate = r;
}

double Domestic::calcBill()
{ 
    return rate*energyUnits; 
}

void Domestic::dispalyInfo()
{
    cout<<"Bill of Current month is "<<calcBill();
    
}