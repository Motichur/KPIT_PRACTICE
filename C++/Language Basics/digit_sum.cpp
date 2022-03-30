//find the sum of digits in the given number

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"ENter a number";
    cin>>n;
    while(n>0)
    {
        sum = sum + n%10;
        n = n/10;
    }
    cout<<sum;
    return 0;
}