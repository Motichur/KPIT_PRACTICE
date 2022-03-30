#include"Account.h"

class SavingsAccount:public Account
{
    int accountno;
    char name[20];
    double bal;
    int trasno;
    public:
    SavingsAccount();
    void balance();
    void displayInfo();
    void transactions();
    void addAmount();
    void cashWithrowl();
};