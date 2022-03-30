#include<iostream>
#include"Array.h"
using namespace std;

Array::Array(int s)
{
    size = s;
    arr[size];
}

void Array::sort(int * a)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(*(a+i)<*(a+j))
            {
                int temp;
                temp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = temp;
            }
        }
    }
}

void Array::search(int *a,int n)
{
    for(int i=0;i<size;i++)
    {
            if(n == *(a+i))
            {
                cout<<"Element found at "<<i<<endl;
                return;
            }
        
    }
}

int Array::min(int *a)
{
    int mini = *(a+0);
    for(int i=0;i<size-1;i++)
    {
        
            if(*(a+i)<mini)
            {
                mini = *(a+i);
            }
        
    }
    return mini;
}

int Array::max(int *a)
{
    int maxi = *(a+0);
    for(int i=0;i<size-1;i++)
    {
        
            if(*(a+i)>maxi)
            {
                maxi = *(a+i);
            }
        
    }
    return maxi;
}

int Array::avg(int *a)
{
    int avg,sum=0;
    for(int i=0;i<size-1;i++)
    {
        sum = sum + *(a+i);   
    }
    avg = sum/size;
    return avg;
}