#include<iostream>
#include"array.h"
using namespace std;
int main()
{
    int n;
    cout<<"Enter array length"<<endl;
    cin>>n;
    int *arr;
    arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a = max(arr,n);
    cout<<"Maximum element from array is : "<<a<<endl;
    int b = min(arr,n);
    cout<<"Minimum Element from array is : "<<b<<endl;
    cout<<"Element of array after multiplying by 5 are as follows "<<endl;
    mul_5(arr,n);
    return 0;
}