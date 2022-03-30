#include<iostream>
#include"subject.h"
using namespace std;
int main()
{
    int n;
    cout<<"enter number of subjects"<<endl;
    cin>>n;
    int *arr;
    arr = new int[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int b = avg(arr,n);
    cout<<"Avaerage of marks "<<b<<endl;

    return 0;
}