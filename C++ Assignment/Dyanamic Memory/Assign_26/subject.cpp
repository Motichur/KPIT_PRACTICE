#include"subject.h"
int avg(int *a,int n)
{
    int sum=0,avg;
    for(int i=0;i<n;i++)
    {
        sum = sum +  *(a+i);
    }
    avg = sum/n;
    return avg;
}