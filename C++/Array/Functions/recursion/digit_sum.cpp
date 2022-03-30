#include<iostream>
using namespace std;

int sum(int n)
{
    
    int k,su=0;
    k = n%10;
    su = su + k; 
    if(n== 0)
    {
        return su;
    }
    return su + sum(n/10);
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int a = sum(n);
    cout<<"Sum of digits of "<<n<<" is : "<<a<<endl;
    return 0;
}