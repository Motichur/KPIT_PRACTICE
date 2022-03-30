#include<stdio.h>
 
int main()
{
    int n=5,t=9,sum=0;
    for(int i=0;i<n;i++)
    {
        sum += t;
        
        t = t*10+9;
    }
    printf("%d",sum);
    return 0;
}