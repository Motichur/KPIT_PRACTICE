#include<iostream>
#include"Mini.h"
using namespace std;

Mini::Mini(int d, int t, int w, int r)
{
    distance = d;
    travel_time = t;
    waiting_time = w;
    rate =r;
}

void Mini::calcBill()
{
    int bill;
    bill = distance*rate+base;
    cout<<"Bil is "<<bill<<endl;
}

void Mini::display()
{
    calcBill();
}