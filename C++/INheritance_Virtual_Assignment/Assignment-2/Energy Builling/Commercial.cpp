#include<iostream>
#include"Commercial.h"
using namespace std;

Commercial::Commercial(int u,double r)
{
    energyUnits = u;
    rate = r;
}

double Commercial::calcBill()
{
    return rate*energyUnits;
}

void Commercial::dispalyInfo()
{
    cout<<"Bill of Current month is "<<calcBill();
    
}
