#include<iostream>
#include"Prime.h"
using namespace std;

Prime::Prime(int d, int t, int w, int r)
{
    distance = d;
    travel_time = t;
    waiting_time = w;
    rate =r;
}

void Prime::calcBill()
{
    int bill;
    bill = distance*rate+base;
    cout<<"Bil is "<<bill<<endl;
}

void Prime::display()
{
    calcBill();
}