#include<stdio.h>
 
int main()
{
    int n = 153;
    int i,sum=0,k=n;
    while(n>0)
    {
        i = n%10;
        sum = sum + (i*i*i);
        n = n/10;
    }
    if(sum==k)
    {
        printf("Number is Amstrong");
    }
    else
    {
        printf("Number is Not Amstrong");
    }
    return 0;
}