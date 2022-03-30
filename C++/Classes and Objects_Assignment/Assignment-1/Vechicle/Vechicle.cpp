#include<iostream>
#include<cstring>
#include"Vechicle.h"
using namespace std;

Vechicle::Vechicle(double s, int r, double f, const char *n, double e)
{
    speed = s;
    rpm = r;
    fuelLevel = f;
    strcpy(drivingMode,n);
    engineTemperature = e;
}

void Vechicle::accept()
{
    cout<<"Enter vechicle speed , rpm , fuellevel , driving mode , enginetemprature"<<endl;
    cin>>speed>>rpm>>fuelLevel>>drivingMode>>engineTemperature;
}

void Vechicle::display()
{
    cout<<"------Vechicle Info------"<<endl;
    cout<<"Speed "<<speed<<endl;
    cout<<"rpm "<<rpm<<endl;
    cout<<"Fuel level "<<fuelLevel<<endl;
    cout<<"Driving Mode "<<drivingMode<<endl;
    cout<<"Engine Temprature "<<engineTemperature<<endl;
}