#include<iostream>
#include<cstring>
#include"Credit.h"
using namespace std;

Credit::Credit()
{
    accountno = 123;
    bal=20000;
    strcpy(name,"ABC");
    trasno = 5;
}

void Credit::displayInfo()
{
    cout<<accountno<<"\t"<<name<<"\t"<<bal<<"\t"<<trasno<<endl;
}

void Credit:: balance()
{
    cout<<bal;
}

void Credit:: transactions()
{
    trasno = trasno+1;
}

void Credit::addAmount()
{
    double amount;
    cout<<"Enter amount you want to add"<<endl;
    cin>>amount;
    bal = bal + amount;
}

void Credit::cashWithrowl()
{
    double amount;
    cout<<"Enter amount you want to Withdraw"<<endl;
    cin>>amount;
    bal = bal - amount;
}