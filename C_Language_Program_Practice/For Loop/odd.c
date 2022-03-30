#include<stdio.h>
 
int main()
{
    int n=10;
    int sum =0;
    for(int i=1;i<=n;i++)
    {
        int j;
        j=2*i-1;
        printf("%d ",j);
        sum = sum +j;
    }
    printf("\n%d",sum);
    return 0;
}