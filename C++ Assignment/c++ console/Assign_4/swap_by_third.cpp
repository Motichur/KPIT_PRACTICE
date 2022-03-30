#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b;
    return 0;
}