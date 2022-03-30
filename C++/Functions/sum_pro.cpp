//ompute the sum and product of two numbers

#include<iostream>
using namespace std;

int sp(int *a,int *b)
{
    int emp;
    emp = *a;
    *a = *a + *b;
    *b = emp * *b;
}
int main()
{
    int a,b;
    cout<<"ENter two numbers"<<endl;
    cin>>a>>b;
    sp(&a,&b);
    cout<<"Addition of two numbers is : "<<a<<endl<<"Multiplication of two numbers is : "<<b<<endl;
    return 0;
}