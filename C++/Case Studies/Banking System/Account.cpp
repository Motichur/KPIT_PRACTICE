#include <iostream>
#include <cstring>
#include "Account.h"
using namespace std;

Account ::Account(const char *n, double b)
{
    strcpy(name, n);
    balance = b;
}

char * Account::getName()
{
    return name;
}

double Account::getbalance()
{
    return balance;
}

void Account::setName(const char *n)
{
    strcpy(name,n);
}

void Account::setBalance(double b)
{
    balance = b;
}

void Account::credit()
{
    double cred;
    cout << "Enter amount to be withdraw" << endl;
    cin >> cred;
    if (cred > credLimit)
    {
        cout << "Sorry.....! Your account has maxmimum Credit amount at one transaction is 100000" << endl;
    }
    else
    {
        balance = balance + cred;
    }
}

void Account ::debit()
{
    double deb;
    cout << "Enter amount to be withdraw" << endl;
    cin >> deb;
    if (deb > debitLimit)
    {
        cout << "Sorry.....! Your account has maxmimum debit amount at one transaction is 10000" << endl;
    }
    else if(deb>balance)
    {
        cout<<"Your account has Low balance"<<endl;
    }
    else if(balance<1000)
    {
        cout<<"You can't Withdraw Amount. Your account reached minimum limit"<<endl;
    }
    else
    {
        balance = balance - deb;
    }
}

void Account::balanceInfo()
{
    cout<<"Balance is "<<balance<<endl;
}

void Account::accept()
{
    cout << "Enter name and balance " << endl;
    cin >> name >> balance;
}

void Account::display()
{
    cout << "------Account Info------" << endl;
    cout << "Id " << id++ << endl;
    cout << "Name " << name << endl;
    cout << "Account Balance is " << balance << endl;
}

bool Account::operator<(Account &a)
{
    return balance < a.balance;
}

ostream operator<<(ostream &cout, Account &a)
{
    cout << "------Account Info------" << endl;
    cout << "Id " << id++ << endl;
    cout << "Name " << a.name << endl;
    cout << "Account Balance is " << a.balance << endl;
}