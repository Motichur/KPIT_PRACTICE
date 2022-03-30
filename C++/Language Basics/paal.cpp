// check whether number is prime or not

#include<iostream>
using namespace std;
int main()
{
    int n,reverse=0;
    cout<<"Enter Number"<<endl;
    cin>>n;
    int k;
    k=n;
    while(n>0)
    {
        reverse = reverse*10 + n%10;
        n = n/10;
    }
    if(k==reverse)
    {
        cout<<"Number is Pallindrome"<<endl;
    }
    else
    {
        cout<<"Number is Not Pallindrome"<<endl;
    }
    return 0;
}