#include<stdio.h>

int main()
{
    int s=1,e=1000,i,sum,j;
    for(i=s;i<=e;i++)
    {
        int t;
        sum =0;
        while(i>0)
        {
            t = i%10;
            sum = sum +t*t*t;
            i = i/10;
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}