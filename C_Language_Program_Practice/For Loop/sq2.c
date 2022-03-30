#include<stdio.h>
 
int main()
{
    int n=5,t=1,sum=0;
    for(int i=1;i<=n;i++)
    {
        sum = sum+t;
        t = (t*10)+1;
    }
    printf("%d",sum);
    return 0;
}