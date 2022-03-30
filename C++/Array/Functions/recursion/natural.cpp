#include<iostream>
using namespace std;
int sum(int n)
{
    int su =n;
    if(n==0)
    {
        return su;
    }
    return su + sum(n-1);
}

int main()
{
    int n;
    cout<<"Enter a Nth Natural Number"<<endl;
    cin>>n;
    int a = sum(n);
    cout<<"Sum of Natural Number upto "<<n<<"th is :" <<a<<endl;
    return 0;
}