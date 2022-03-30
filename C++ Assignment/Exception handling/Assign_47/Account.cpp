#include<iostream>
#include<exception>
#include"Account.h"
using namespace std;

Account::Account(double b)
{
    balance=b;
}

double Account::deposite()
{
    double dep;
    cout<<"Enter ammount to be deposite"<<endl;
    cin>>dep;
    balance = dep + balance;
}

double Account :: withdraw()
{
    double with;
    cout<<"Enter amount to be withdraw"<<endl;
    cin>>with;
    if(with>balance)
    {
        throw "Insufficent Balance";
    }
    else if(with>15000)
    {
        throw "OverLimit !";
    }
    balance = balance - with;
}

void Account::showBalance()
{
    cout<<"Balance is "<<balance<<endl;
}