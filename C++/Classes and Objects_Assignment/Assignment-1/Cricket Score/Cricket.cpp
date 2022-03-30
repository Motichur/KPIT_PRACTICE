#include<iostream>
#include"Cricket.h"
using namespace std;

Cricket::Cricket(int b, int r)
{
    no_of_balls = b;
    runs =r;
}

void Cricket::calcIncrement()
{
    int run;
    cout<<"Enter runs scored on current ball"<<endl;
    cin>>run;
    runs = runs + run;
    no_of_balls++;
}

void Cricket::calcRunRate()
{
    double overs, runrate;
    overs = no_of_balls/6.0;
    runrate = runs/overs;
    cout<<"Run rate is "<<runrate<<endl;
}

void Cricket::display()
{
    cout<<runs<<" Runs are scored by batsman in "<<no_of_balls<<" Balls"<<endl;
}