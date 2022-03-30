#include<iostream>
#include"Sedan.h"
using namespace std;

Sedan::Sedan(int d, int t, int w, int r)
{
    distance = d;
    travel_time = t;
    waiting_time = w;
    rate =r;
}

void Sedan::calcBill()
{
    int bill;
    bill = distance*rate+base;
    cout<<"Bil is "<<bill<<endl;
}

void Sedan::display()
{
    calcBill();
}