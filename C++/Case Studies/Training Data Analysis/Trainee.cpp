#include<iostream>
#include<cstring>
#include"Trainee.h"
using namespace std;

Trainee::Trainee()
{

}

Trainee::Trainee(const char * t, double s,int i, const char *n , double b):Employee(i,n,b)
{
    strcpy(track_name,t);
    scores = s;
}

void Trainee::payroll()
{

}

void Trainee::appraisal()
{

}

void Trainee::display()
{
    
}