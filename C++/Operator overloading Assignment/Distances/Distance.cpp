#include<iostream>
#include"Distance.h"
using namespace std;

Distance::Distance(int m, int k)
{
    meter = m;
    killometer = k;
}

Distance Distance::operator+(Distance &d)
{
    Distance temp;
    temp.meter = meter + d.meter;
    temp.killometer = killometer + d.killometer;
    return temp;
}

Distance Distance::operator-(Distance &d)
{
    Distance temp;
    temp.meter = meter - d.meter;
    temp.killometer = killometer - d.killometer;
    return temp;
}

Distance Distance::operator++()
{
    Distance temp;
    temp.meter = ++meter;
    temp.killometer = ++killometer;
    return temp;
}

void Distance::display()
{
    cout<<meter<<"\t"<<killometer<<endl;
}