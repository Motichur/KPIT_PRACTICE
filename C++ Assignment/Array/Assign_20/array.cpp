#include<iostream>
#include"array.h"
using namespace std;

int max(int *a, int n)
{
    int max=*(a+0);
    for(int i=0;i<n;i++)
    {
        if(max<*(a+i))
        {
            max = *(a+i); 
        }
    }
    return max;
}

int min(int *a, int n)
{
    int min=*(a+0);
    for(int i=0;i<n;i++)
    {
        if(min>*(a+i))
        {
            min = *(a+i); 
        }
    }
    return min;
}

void mul_5(int *a, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<*(a+i)*5<<" ";
    }
}