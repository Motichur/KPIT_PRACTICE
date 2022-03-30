#include<iostream>
using namespace std;

static int id=1;

class Account
{
    char name[20];
    double balance;
    const double debitLimit = 10000;
    const double credLimit = 100000;
    const double minBalance = 1000;
    public:
    Account(const char * = "ABC", double=1000);
    char * getName();
    double getbalance();
    void setName(const char *);
    void setBalance(double);
    void display();
    void accept();
    void credit();
    void debit();
    void balanceInfo();
    friend ostream operator<<(ostream &, Account &);
    bool operator<(Account &);
};