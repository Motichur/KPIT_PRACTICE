#include<iostream>
#include<cstring>
#include"Account.h"
using namespace std;

Account::Account(int a,const char*n,double b)
{
    account_no = a;
    strcpy(name,n);
    balance = b;
}

double Account::calcDebit()
{
    
    cout<<"Enter Amount want to debit"<<endl;
    cin>>debit;
    return debit;
}

double Account::calcWithdraw()
{
    cout<<"Enter amount to be Withdraw "<<endl;
    cin>>withdraw;
    return withdraw;
}

void Account:: balanceInfo()
{
    balance = balance + withdraw - debit;
    cout<<"Balance in an account is "<<balance<<endl;
}