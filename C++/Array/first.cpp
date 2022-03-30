#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter length of array"<<endl;
    cin>>n;

    int *arr;
    arr =(int*) malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum = sum +arr[i];
    }
	cout<<sum;
}