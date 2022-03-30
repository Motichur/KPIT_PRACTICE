#include<iostream>
#include"Vechicle_polcy.h"
#include<cstring>
using namespace std;

Vehicle :: Vehicle()
{
    policyid = 1;
    strcpy(Vechicle_name,"CELLERO");
    amount = 50000;
}

Vehicle :: Vehicle(int i, const char* n,double a)
{
    policyid = i;
    strcpy(Vechicle_name,n);
    amount = a;
}

int Vehicle ::getPoilcyId()
{
    return policyid;
}

char * Vehicle ::getVechicleName()
{
    return Vechicle_name;
}

double Vehicle ::getAmount()
{
    return amount;
}

void Vehicle :: setPoilcyId(int i)
{
    policyid = i;
}

void Vehicle ::setVechicleName(const char * n)
{
    strcpy(Vechicle_name,n);
}

void Vehicle :: setAmount(double a)
{
    amount = a;
}

void Vehicle:: accept()
{
    cout<<"Enter Policy Details"<<endl;
    cin>>policyid>>Vechicle_name>>amount;
}

void Vehicle :: display()
{
    cout<<policyid<<"\t"<<Vechicle_name<<"\t"<<amount<<endl;
}
