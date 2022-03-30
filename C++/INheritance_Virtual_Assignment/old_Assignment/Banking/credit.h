#include"Account.h"

class Credit:public Account
{
    int accountno;
    char name[20];
    double bal;
    int trasno;
    public:
    Credit();
    void balance();
    void displayInfo();
    void transactions();
    void addAmount();
    void cashWithrowl();
};