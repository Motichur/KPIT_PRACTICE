class Account
{
    int account_no;
    char name[20];
    double balance;
    double debit=0;
    double withdraw=0;
    public:
    Account(int=123456,const char * ="ABC",double=50000);
    double calcDebit();
    double calcWithdraw();
    void balanceInfo();
};