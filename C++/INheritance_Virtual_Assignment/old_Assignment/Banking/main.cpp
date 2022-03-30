#include<iostream>
#include"SavingsAccount.h"
using namespace std;
int main()
{
    SavingsAccount s;
    s.addAmount();
    s.transactions();
    s.displayInfo();
    s.cashWithrowl();
    s.transactions();
    s.displayInfo();
    return 0;
}