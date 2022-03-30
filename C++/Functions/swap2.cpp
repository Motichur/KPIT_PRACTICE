// Swap number using call by references

#include<iostream>
using namespace std;
int swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a,b;
    cout<<"Enter two Numbers"<<endl;
    cin>>a>>b;
    cout<<"Numbers Before Swap"<<endl;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"Numbers After Swap"<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;
}