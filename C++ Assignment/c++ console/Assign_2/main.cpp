#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of subjects"<<endl;
    cin>>n;
    int *a;
    a = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum + *(a+i);
    }
    int avg;
    avg = sum/n;
    cout<<"Average of marks is "<<avg<<endl;
    return 0;
}