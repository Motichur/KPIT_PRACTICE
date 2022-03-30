//GCD of two numbers

#include<iostream>
using namespace std;
int main()
{
    int n=15,n1=20,gcd;
    for(int i=1;i<=n1;i++)
    {
        if(n%i==0 && n1%i==0)
        {
            gcd = i;
        }
    }
    cout<<gcd<<endl;
    return 0;
}