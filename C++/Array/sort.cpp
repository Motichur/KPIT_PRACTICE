#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter length of array"<<endl;
    cin>>n;

    int *arr;
    int temp;
    arr =(int*) malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(arr[i]>arr[j])
            {
                
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}