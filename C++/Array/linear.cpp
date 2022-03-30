#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter length of array"<<endl;
    cin>>n;

    int *arr,j;
    arr =(int*) malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max,count=0;
    cout<<"enter element which you want to search";
    cin>>max;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==max)
        {
            count++;
            //j = i;
            cout<<"Element fount at "<<i<<" index";
            break;
        }
    }
    return 0;
}