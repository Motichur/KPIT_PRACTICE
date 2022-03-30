#include<iostream>
#include"Account.h"
using namespace std;
int main()
{
    Account a;
    try
    {
        a.withdraw();
    }
    catch(const char *n)
    {
        cout<<n<<endl;
    }
    a.showBalance();
    return 0;
}