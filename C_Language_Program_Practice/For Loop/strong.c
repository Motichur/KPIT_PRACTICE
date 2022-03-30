#include<stdio.h>
 
int main()
{
    int n=145,sum=0;
    int k=n;
    int fact;
    while(n>0)
    {
        int j = n%10;
        fact =1;
        for(int i=j;i>0;i--)
        {
            fact = fact*i;
        }        
        printf("%d\n",fact);
        sum = sum +fact;
        n = n/10;
    }
    if(k == sum)
    {
        printf("Number is strong number");
    }
    else
    {
        printf("Number is Not a strong number");
    }
    return 0;
}