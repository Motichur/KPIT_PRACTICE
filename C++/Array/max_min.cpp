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
    int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
	cout<<"max = "<<max<<" "<<"min = "<<min;
    return 0;
}