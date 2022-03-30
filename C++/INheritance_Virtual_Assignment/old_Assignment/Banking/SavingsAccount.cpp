#include<iostream>
#include<cstring>
#include"SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount()
{
    accountno = 123;
    bal=20000;
    strcpy(name,"ABC");
    trasno = 5;
}

void SavingsAccount::displayInfo()
{
    cout<<accountno<<"\t"<<name<<"\t"<<bal<<"\t"<<trasno<<endl;
}

void SavingsAccount:: balance()
{
    cout<<bal;
}

void SavingsAccount:: transactions()
{
    trasno = trasno+1;
}

void SavingsAccount::addAmount()
{
    double amount;
    cout<<"Enter amount you want to add"<<endl;
    cin>>amount;
    bal = bal + amount;
}

void SavingsAccount::cashWithrowl()
{
     double amount;
    cout<<"Enter amount you want to Withdraw"<<endl;
    cin>>amount;
    bal = bal - amount;
}