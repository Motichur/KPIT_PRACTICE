#include<stdio.h>
 
int main()
{
    int n=28,sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum = sum + i;
        }
    }
    if(sum==n)
    {
        printf("Perfect number");
    }
    else
    {
        printf("Not a Perfect number");
    }
    return 0;
}