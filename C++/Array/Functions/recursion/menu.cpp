#include<iostream>
using namespace std;

int add(int m, int n)
{
    return m+n;
}
int sub(int m, int n)
{
    return m-n;
}
int mul(int m, int n)
{
    return m*n;
}
int divi(int m,int n)
{
    return m/n;
}

int main()
{
    char  ar[4] = {'+','-','*','/'};
    cout<<"+"<<endl<<"-"<<endl<<"*"<<endl<<"/"<<endl;
    cout<<"Enter Your choice from above"<<endl;
    char ch;
     cin>>ch;
    if(ch == ar[0])
    {
        int n,m;
        cout<<"Enter numbers"<<endl;
        cin>>m>>n;
        cout<<add(m,n);
    }
    else if(ch == ar[1])
    {
        int n,m;
        cout<<"Enter numbers"<<endl;
        cin>>m>>n;
        cout<<sub(m,n);
    }
    else if(ch == ar[2])
    {
        int n,m;
        cout<<"Enter numbers"<<endl;
        cin>>m>>n;
        cout<<mul(m,n);
    }
    else
    {
        int n,m;
        cout<<"Enter numbers"<<endl;
        cin>>m>>n;
        cout<<divi(m,n);
    }
    return 0;
}